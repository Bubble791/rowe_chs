#!/usr/bin/env python3

import os
import subprocess
import sys
import shutil
import binascii
import textwrap
import sys
import argparse
import _io

def ExtractPointer(byteList: [bytes]):
    pointer = 0
    for a in range(len(byteList)):
        pointer += (int(byteList[a])) << (8 * a)

    return pointer

IGNORED_OFFSETS = []

def RealRepoint(rom: _io.BufferedReader, offsetTuples: [(int, int, str)]):
    pointerList = []
    pointerDict = {}
    for tup in offsetTuples:  # Format is (Double Pointer, New Pointer, Symbol)
        offset = tup[0]
        rom.seek(offset)
        pointer = ExtractPointer(rom.read(4))
        pointerList.append(pointer)
        pointerDict[pointer] = (tup[1] + 0x08000000, tup[2])

    offset = 0
    offsetList = []

    while offset < 0xFFFFFD:
        if offset in IGNORED_OFFSETS:
            offset += 4
            continue

        rom.seek(offset)
        word = ExtractPointer(rom.read(4))
        rom.seek(offset)

        for pointer in pointerList:
            if word == pointer:
                offsetList.append(hex(offset + 0x08000000))
                break

        offset += 4

    return offsetList

with open("rowe_eu.gba", "rb") as rom:
    offsetsToRepointTogether = [(0x184358, 0, 0)]

    for i in RealRepoint(rom, offsetsToRepointTogether):
        print(f".org {i}\n    .word gBattleStringsTable\n")