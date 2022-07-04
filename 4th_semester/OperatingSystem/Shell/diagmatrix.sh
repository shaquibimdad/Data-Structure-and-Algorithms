awk '{for (i=1;i<=NF;i++) if (NR>=1 && NR==i) {for (j=1;j<=i-1;j++) printf " ";print $(i-0)}}' matrix
