import argparse

parser = argparse.ArgumentParser()
parser.add_argument("output", help="Поток, в который будет производиться вывод.")
args = parser.parse_args()
target = None
if args.output:
    target = args.output

file = open(target, 'w')
file.write("int sum(int a, int b) {\n")
file.write("    return a + b;\n")
file.write("}\n")
file.close()