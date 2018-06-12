import sys

if len(sys.argv) < 2:
    print("Usage: input_file.raw")
    sys.exit()
    
input_file = sys.argv[1]

with open(input_file, 'rb') as f:
    bytes = f.read()

s = ""
for b in bytes:
    s += str(b) + ","
print("\n\n\n\n")
print(s)
print("\n\n")
print("Data size=" + str(len(bytes)) + " bytes")