import os
import random 
import subprocess

default_args = {
    "lorem_ipsum": random.randint(1, 10000),
    "dice_roll": random.randint(1, 7)
}

ignore: list[str] = [
    ".git",
    ".github",
    ".vscode",
    "assets"
]

for folder in filter(lambda f: f not in ignore, os.listdir()) :
    if not os.path.isdir(folder): continue
    res = subprocess.call(f"g++ {folder}/main.cpp -std=c++23 -o {folder}")
    if res!=0:
        print(f"❌ compiling {folder} failed.")
    else:
        print(f"✅ compiling {folder} successful.")
    res2 = subprocess.call(f"{folder} {default_args.get(folder, '')}")
    if res2!=0:
        print(f"\n❌ running {folder} failed.")
    else:
        print(f"\n✅ running {folder} successful.")