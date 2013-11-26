
import sys
from collections import defaultdict


path_counts = defaultdict(int)

for line in sys.stdin:
    path_counts[line] += 1

for path, count in sorted(path_counts.items(),
                   key=lambda p: p[1],
                   reverse=True)[:10]:
    print path.strip(), count
