# Hash Map Benchmark Suite
Execution speeds evaluated in milliseconds. Heatmaps use logarithmic distribution (Green = Fast, Yellow = Mid, Red = Slow). Green borders highlight the column winners.


## Dataset 1: Primitive Keys (int)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Container / Map Type}\ \ \ \ \  & \ \ \mathtt{Bulk Insertion}\ \  & \ \ \mathtt{Successful Lookups}\ \  & \ \ \mathtt{Unsuccessful Lookups}\ \  & \ \ \mathtt{Update Existing Keys}\ \  & \ \ \mathtt{Erasure}\ \ \  & \ \ \mathtt{Lookups After Erasure}\ \  & \ \ \mathtt{Total Time}\ \  \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (gp)}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{19.56}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.24}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{16.16}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.84}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{6.35}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.71}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{17.64}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.90}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{2.83}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.42}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{36.46}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.80}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{99}}\ \ \ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 11.29}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (cc)}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{60.13}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 8.61}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{15.27}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.49}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{9.99}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.88}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{17.5}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.23}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{14.3}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.38}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{11.9}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.41}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{129.09}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 9.56}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU stdlib}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{113.26}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.08}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{32.71}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.55}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{29.06}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.97}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{34.78}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.48}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{40.4}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 7.31}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{22.51}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.80}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{272.72}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 14.72}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{MSVC stdlib}\ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{71.19}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.10}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{33.95}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.85}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{34.74}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.17}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{36.15}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.38}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#ef4444}{\mathtt{25.07}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.47}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{21.81}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.32}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{222.91}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 8.53}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{ankerl}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{32.15}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 8.15}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{12.18}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.75}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{8.59}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.41}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{14.13}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.45}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{6.84}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.69}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{8.65}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.44}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{82.54}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 9.08}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{phmap}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \ \color{#16a34a}{\mathtt{13.9}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.64}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{11.11}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.46}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{4.05}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.22}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{14.97}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.13}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{5.13}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.29}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{7.56}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.26}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#16a34a}{\mathtt{56.72}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 3.22}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball foolish}\ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{157.77}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.89}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{29.51}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.67}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{22.6}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.72}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{47.3}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.27}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{12.37}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.83}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{21.51}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.75}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{291.06}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 11.62}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball mmap}\ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{88.12}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.53}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{28.59}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.37}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{21.62}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.06}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{48.04}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.57}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{11.76}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.94}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{22.02}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.07}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{220.15}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 5.81}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball avx}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{93.17}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.73}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{33.11}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.77}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{14.6}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.78}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{57.03}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.89}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{8.13}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.80}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{22.85}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.58}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{228.89}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 4.53}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball load=inf}\ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{14.76}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.60}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{11.45}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.22}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{4.73}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.80}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{26.39}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.63}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{3.8}}\ \ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.35}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{8.92}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.65}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{70.05}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 7.62}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball prefetch}\ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{16.08}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.75}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{12.9}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.23}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{4.4}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.35}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{26.27}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.61}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#16a34a}{\mathtt{2.64}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.85}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{7.47}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.95}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{69.76}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 6.5}}\ \ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball AOSOA}\ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{18.43}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.74}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{11.05}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.56}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{6.08}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.08}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{18.17}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.11}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{2.75}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.77}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{8.84}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.40}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{65.32}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 7.1}}\ \ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket foolish}\ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{301.15}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.59}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{38.51}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.77}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{30.1}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.79}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{55}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.05}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{18.88}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 2.82}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{31.33}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.20}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{474.97}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 11.44}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket mmap}\ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{146.16}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 10.68}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{38.37}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.54}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{31.89}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.02}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{59.57}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.41}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{18.42}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.37}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{31.31}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.56}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{325.72}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 12.07}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket avx}\ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{158.12}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.94}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{44.8}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.31}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{13.78}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.79}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{70.97}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.67}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{14.72}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.33}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{30.73}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.18}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{333.12}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 8.12}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket load=inf}\ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{20.67}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.08}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{22.15}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.88}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{4.87}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.59}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{37.59}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.13}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{5.7}}\ \ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 0.94}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{13.79}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.55}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{104.77}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 11.18}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket prefetch}\ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{18.24}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.88}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{22.59}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.73}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{5.65}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.93}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{37.2}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.78}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{6.45}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 2.36}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{12.6}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.05}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{102.73}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 9.91}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket AOSOA}\ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{23.76}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.78}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{18.18}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.72}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{6.4}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.36}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{29.01}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.07}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{5.45}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.12}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{12.86}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.27}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{95.66}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 8.81}}\ \ \ \end{array} \\
\hline
\end{array}
$$


## Dataset 2: const char* (Short Strings)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Container / Map Type}\ \ \ \ \  & \ \ \mathtt{Bulk Insertion}\ \  & \ \ \mathtt{Successful Lookups}\ \  & \ \ \mathtt{Unsuccessful Lookups}\ \  & \ \ \mathtt{Update Existing Keys}\ \  & \ \ \mathtt{Erasure}\ \ \  & \ \ \mathtt{Lookups After Erasure}\ \  & \ \ \mathtt{Total Time}\ \  \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (gp)}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{49.01}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.05}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{60.53}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.98}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{59.74}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.39}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{59.44}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.48}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{9.48}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.02}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{69.18}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.70}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{307.38}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 15.08}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (cc)}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{62.85}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.67}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{46.41}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.67}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{35.21}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.57}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{44.66}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.81}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{19.87}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.59}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{38.27}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.54}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{247.27}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 14.28}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU stdlib}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{157.81}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 21.34}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{83.3}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.60}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{95.63}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 19.00}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{86.61}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.89}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#ef4444}{\mathtt{59.54}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 7.21}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{62.34}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.38}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{545.23}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 30.45}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{MSVC stdlib}\ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{85.75}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.77}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{57.1}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.56}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{54.56}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.46}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{59.34}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.77}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{26.94}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 7.41}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{43.22}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.39}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{326.91}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 16.02}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{ankerl}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{46.92}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.03}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{31.89}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.75}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{24.13}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.88}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{37.26}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.68}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{18.65}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 7.17}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{30.44}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.76}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{189.29}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 12.9}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{phmap}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{42.04}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.95}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{41.37}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.05}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{16.05}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.50}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{45.79}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.51}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#22c55e}{\mathtt{11.63}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.05}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{26.46}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.44}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{183.34}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 6.38}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball foolish}\ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{235.76}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 15.82}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{47.84}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.65}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{32.57}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 0.93}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{62.23}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.58}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{17.08}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.07}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{35.68}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.34}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{431.16}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 18.41}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball mmap}\ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{130.21}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 19.88}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{47.73}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.60}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{32.77}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.61}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{62.55}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.22}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{17.31}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.36}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{37.71}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.46}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{328.28}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 21.74}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball avx}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{145.62}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 13.08}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{66.38}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.42}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{30.03}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.99}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{85.31}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.12}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{16.15}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.74}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{44.81}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.67}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{388.3}}\ \ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 15.7}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball load=inf}\ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{26.75}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.38}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{29.7}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.84}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{9.9}}\ \ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.13}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{40.67}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.01}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{8.29}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.62}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{22.02}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.63}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{137.33}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 12.6}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball prefetch}\ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{26.92}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.30}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{32.64}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.99}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{11.38}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.77}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{40.27}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.78}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#16a34a}{\mathtt{5.54}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.23}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{16.49}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.78}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#16a34a}{\mathtt{133.24}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 10.33}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball AOSOA}\ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{32.37}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.79}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{27.61}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.98}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{12.79}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.37}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{36.83}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.96}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{5.92}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.36}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{21.37}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.18}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{136.89}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 10.68}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket foolish}\ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{356.06}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 12.68}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{47.68}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.43}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{38.41}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.36}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{66.88}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.72}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{22.88}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.07}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{42.95}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.92}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{574.86}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 13.97}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket mmap}\ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{168.45}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.06}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{54.86}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.97}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{38.1}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.65}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{72.82}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.11}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{24.26}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 2.61}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{43.22}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.58}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{401.71}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 8.62}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket avx}\ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{194.19}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 11.60}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{78.41}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.40}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{24.4}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.38}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{91.22}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.57}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{20.9}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 2.24}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{52.55}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.56}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#ef4444}{\mathtt{461.67}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 13.45}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket load=inf}\ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#16a34a}{\mathtt{20.06}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.71}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{39.53}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.30}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{10.02}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.07}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{50.49}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.68}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#22c55e}{\mathtt{11.75}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 3.13}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{24.77}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.63}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{156.62}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 11.1}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket prefetch}\ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{25.01}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.40}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{42.06}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.61}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{12.04}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.40}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{52.27}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.60}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#22c55e}{\mathtt{11.04}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.51}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{25.37}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 1.71}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{167.79}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 8.39}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket AOSOA}\ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{26.26}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.94}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{38.28}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.83}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{13.62}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.20}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{48.23}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.13}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{9.67}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 1.52}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{25.39}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 2.85}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{161.45}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 8.38}}\ \ \ \end{array} \\
\hline
\end{array}
$$


## Dataset 3: const char* (Long Strings)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Container / Map Type}\ \ \ \ \  & \ \ \mathtt{Bulk Insertion}\ \  & \ \ \mathtt{Successful Lookups}\ \  & \ \ \mathtt{Unsuccessful Lookups}\ \  & \ \ \mathtt{Update Existing Keys}\ \  & \ \ \ \mathtt{Erasure}\ \ \  & \ \ \mathtt{Lookups After Erasure}\ \  & \ \ \mathtt{Total Time}\ \  \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (gp)}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{187.14}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 14.50}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{242.72}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 17.03}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{279.48}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 18.53}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{237.68}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 19.28}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{45.04}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.75}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{273.56}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 10.69}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1265.62}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 36.77}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (cc)}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{217.03}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 22.74}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{219.08}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 12.50}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{203.38}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 14.78}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{204.54}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 21.09}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{57.11}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.15}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{176.15}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 18.26}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#22c55e}{\mathtt{1077.29}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 41.08}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU stdlib}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{415.44}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 33.96}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{365.82}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 30.91}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{419.01}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 34.65}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{356.8}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 42.74}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#ef4444}{\mathtt{152.75}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 10.46}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{263.81}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.46}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#ef4444}{\mathtt{1973.63}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 72.81}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{MSVC stdlib}\ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{227.16}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 21.34}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{237.98}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.60}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{262.31}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 15.81}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{213.42}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.50}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{58.76}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 12.43}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{204.74}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 23.64}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1204.37}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 39.58}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{ankerl}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{164.57}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 14.28}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{175.35}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 8.75}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{115.15}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.61}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{155.34}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 11.20}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{73.3}}\ \ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 9.68}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{140.26}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.29}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{823.97}}\ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 24}}\ \ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{phmap}\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{183.56}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.18}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{202.83}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 17.89}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{113.81}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 22.20}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{209.09}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 18.71}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{50.53}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.14}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{142.45}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 8.41}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{902.27}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 36.09}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball foolish}\ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{362.77}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 22.07}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{227.69}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 13.30}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{179.64}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 20.43}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{257.35}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.34}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{61.29}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.18}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{200.68}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.60}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1289.42}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 34.78}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball mmap}\ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{259.02}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 25.76}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{237.23}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 29.50}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{167.55}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 14.69}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{274.1}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 27.82}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{62.44}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 2.00}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{194.51}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 11.85}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1194.85}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 51.65}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball avx}\ \ \ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{261.47}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.77}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{288.09}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 20.94}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{144.32}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 12.23}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{309.17}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.20}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{72.04}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 5.44}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{216.88}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 19.51}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1291.97}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 33.48}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball load=inf}\ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{123.19}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.92}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{180.05}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 21.08}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{89.39}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 13.52}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{203.25}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 14.17}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{42.58}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 3.52}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{139.93}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 19.50}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#16a34a}{\mathtt{778.39}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 36.32}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball prefetch}\ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{134.84}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 14.02}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{179.18}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 33.26}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{94.88}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 23.71}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{208.79}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 22.40}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#16a34a}{\mathtt{39.81}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 9.02}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{140.61}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 23.97}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{798.11}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 54.98}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball AOSOA}\ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#eab308}{\mathtt{141.44}}\ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.98}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{192.83}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 13.89}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{122.84}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.57}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{192.73}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.28}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{42.18}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.32}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{154.74}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 25.05}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{846.76}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 31.7}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket foolish}\ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{408.48}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 20.11}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{236.82}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 11.07}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{185.57}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 7.57}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{251.77}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.83}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{67.17}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.13}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{197.33}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 3.39}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1347.14}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 26.64}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket mmap}\ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{268.23}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 29.52}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{269.52}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 55.84}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{205.07}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 21.93}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{271.82}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.91}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{73.99}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 4.22}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{221.97}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.91}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{1310.6}}\ \ \ \  \\ \ \ \ \color{#64748b}{\mathtt{+/- 67.9}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket avx}\ \ \ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#ef4444}{\mathtt{254.08}}\ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 12.19}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{334.15}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 16.52}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{146.58}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.02}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{364.93}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 25.88}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#eab308}{\mathtt{84.99}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 6.26}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#ef4444}{\mathtt{251.25}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 25.71}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \color{#eab308}{\mathtt{1435.98}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 42.75}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket load=inf}\ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{55.87}}\ \ \ \ \ \ \  \\ \ \ \ \ \color{#64748b}{\mathtt{+/- 11.12}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{229.92}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 15.53}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{97.26}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 19.91}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{236.12}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 10.48}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{50.85}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 5.20}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#16a34a}{\mathtt{139.11}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.67}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{809.13}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 30.33}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket prefetch}\ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#16a34a}{\mathtt{55.58}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 4.21}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{238.03}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 22.13}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{92.89}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 5.55}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{266.84}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 37.78}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{56.07}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 11.11}}\ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{146.43}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 11.82}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{855.84}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 47.21}}\ \ \ \end{array} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket AOSOA}\ \ \ \ \ \ \  & \begin{array}{c}\ \ \ \ \ \ \color{#22c55e}{\mathtt{65.75}}\ \ \ \ \ \ \  \\ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 6.39}}\ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{210.66}}\ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 18.69}}\ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{124.16}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 8.06}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#eab308}{\mathtt{236.67}}\ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 15.05}}\ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{50.99}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 7.69}}\ \ \ \end{array} & \begin{array}{c}\ \ \ \ \ \ \ \ \ \color{#22c55e}{\mathtt{172.88}}\ \ \ \ \ \ \ \ \ \  \\ \ \ \ \ \ \ \ \ \color{#64748b}{\mathtt{+/- 9.68}}\ \ \ \ \ \ \ \ \ \end{array} & \begin{array}{c}\ \ \ \ \color{#22c55e}{\mathtt{861.11}}\ \ \ \  \\ \ \ \color{#64748b}{\mathtt{+/- 28.89}}\ \ \ \end{array} \\
\hline
\end{array}
$$