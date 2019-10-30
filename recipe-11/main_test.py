import subprocess
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--exec', help="path to executable")
args = parser.parse_args()

def execute_cpp_code(ints):
    result = subprocess.check_output([args.exec] + ints)
    return int(result)

if __name__ == "__main__":
    result = execute_cpp_code([str(i) for i in range(1, 100)])
    assert result == 99, 'got ' + str(result) + ', want 99'