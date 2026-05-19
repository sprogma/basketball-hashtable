# Hash Map Benchmark Suite
Execution speeds evaluated in milliseconds. Heatmaps use logarithmic distribution (Green = Fast, Yellow = Mid, Red = Slow). Green borders highlight the column winners.


## Dataset 1: Primitive Keys (int)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Container / Map Type}\hss} & \hbox to 100pt{\hss\textbf{Bulk Insertion}\hss} & \hbox to 100pt{\hss\textbf{Successful Lookups}\hss} & \hbox to 100pt{\hss\textbf{Unsuccessful Lookups}\hss} & \hbox to 100pt{\hss\textbf{Update Existing Keys}\hss} & \hbox to 100pt{\hss\textbf{Erasure}\hss} & \hbox to 100pt{\hss\textbf{Lookups After Erasure}\hss} & \hbox to 100pt{\hss\textbf{Total Time}\hss} \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU pb\_ds (gp)}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{19.56}} \space \color{#64748b}{\pm \textsf{2.24}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{16.16}} \space \color{#64748b}{\pm \textsf{2.84}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{6.35}} \space \color{#64748b}{\pm \textsf{1.71}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{17.64}} \space \color{#64748b}{\pm \textsf{3.90}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{2.83}} \space \color{#64748b}{\pm \textsf{0.42}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{36.46}} \space \color{#64748b}{\pm \textsf{9.80}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{99}} \space \color{#64748b}{\pm \textsf{11.29}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU pb\_ds (cc)}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{60.13}} \space \color{#64748b}{\pm \textsf{8.61}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{15.27}} \space \color{#64748b}{\pm \textsf{1.49}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{9.99}} \space \color{#64748b}{\pm \textsf{0.88}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{17.5}} \space \color{#64748b}{\pm \textsf{3.23}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{14.3}} \space \color{#64748b}{\pm \textsf{1.38}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.9}} \space \color{#64748b}{\pm \textsf{1.41}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{129.09}} \space \color{#64748b}{\pm \textsf{9.56}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU stdlib}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{113.26}} \space \color{#64748b}{\pm \textsf{7.08}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{32.71}} \space \color{#64748b}{\pm \textsf{6.55}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{29.06}} \space \color{#64748b}{\pm \textsf{5.97}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{34.78}} \space \color{#64748b}{\pm \textsf{4.48}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{40.4}} \space \color{#64748b}{\pm \textsf{7.31}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{22.51}} \space \color{#64748b}{\pm \textsf{3.80}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{272.72}} \space \color{#64748b}{\pm \textsf{14.72}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{MSVC stdlib}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{71.19}} \space \color{#64748b}{\pm \textsf{5.10}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{33.95}} \space \color{#64748b}{\pm \textsf{4.85}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{34.74}} \space \color{#64748b}{\pm \textsf{3.17}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{36.15}} \space \color{#64748b}{\pm \textsf{2.38}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{25.07}} \space \color{#64748b}{\pm \textsf{1.47}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{21.81}} \space \color{#64748b}{\pm \textsf{2.32}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{222.91}} \space \color{#64748b}{\pm \textsf{8.53}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{ankerl}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{32.15}} \space \color{#64748b}{\pm \textsf{8.15}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{12.18}} \space \color{#64748b}{\pm \textsf{1.75}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{8.59}} \space \color{#64748b}{\pm \textsf{1.41}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{14.13}} \space \color{#64748b}{\pm \textsf{2.45}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{6.84}} \space \color{#64748b}{\pm \textsf{1.69}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{8.65}} \space \color{#64748b}{\pm \textsf{1.44}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{82.54}} \space \color{#64748b}{\pm \textsf{9.08}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{phmap}\hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{13.9}} \space \color{#64748b}{\pm \textsf{0.64}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.11}} \space \color{#64748b}{\pm \textsf{1.46}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{4.05}} \space \color{#64748b}{\pm \textsf{0.22}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{14.97}} \space \color{#64748b}{\pm \textsf{2.13}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{5.13}} \space \color{#64748b}{\pm \textsf{1.29}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{7.56}} \space \color{#64748b}{\pm \textsf{1.26}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{56.72}} \space \color{#64748b}{\pm \textsf{3.22}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball foolish}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{157.77}} \space \color{#64748b}{\pm \textsf{9.89}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{29.51}} \space \color{#64748b}{\pm \textsf{1.67}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{22.6}} \space \color{#64748b}{\pm \textsf{1.72}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{47.3}} \space \color{#64748b}{\pm \textsf{5.27}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{12.37}} \space \color{#64748b}{\pm \textsf{0.83}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{21.51}} \space \color{#64748b}{\pm \textsf{1.75}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{291.06}} \space \color{#64748b}{\pm \textsf{11.62}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball mmap}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{88.12}} \space \color{#64748b}{\pm \textsf{2.53}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{28.59}} \space \color{#64748b}{\pm \textsf{3.37}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{21.62}} \space \color{#64748b}{\pm \textsf{2.06}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{48.04}} \space \color{#64748b}{\pm \textsf{2.57}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{11.76}} \space \color{#64748b}{\pm \textsf{0.94}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{22.02}} \space \color{#64748b}{\pm \textsf{2.07}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{220.15}} \space \color{#64748b}{\pm \textsf{5.81}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball avx}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{93.17}} \space \color{#64748b}{\pm \textsf{2.73}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{33.11}} \space \color{#64748b}{\pm \textsf{1.77}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{14.6}} \space \color{#64748b}{\pm \textsf{0.78}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{57.03}} \space \color{#64748b}{\pm \textsf{2.89}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{8.13}} \space \color{#64748b}{\pm \textsf{0.80}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{22.85}} \space \color{#64748b}{\pm \textsf{0.58}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{228.89}} \space \color{#64748b}{\pm \textsf{4.53}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball load=inf}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{14.76}} \space \color{#64748b}{\pm \textsf{2.60}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.45}} \space \color{#64748b}{\pm \textsf{4.22}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{4.73}} \space \color{#64748b}{\pm \textsf{1.80}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{26.39}} \space \color{#64748b}{\pm \textsf{4.63}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{3.8}} \space \color{#64748b}{\pm \textsf{1.35}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{8.92}} \space \color{#64748b}{\pm \textsf{2.65}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{70.05}} \space \color{#64748b}{\pm \textsf{7.62}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball prefetch}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{16.08}} \space \color{#64748b}{\pm \textsf{2.75}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{12.9}} \space \color{#64748b}{\pm \textsf{3.23}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{4.4}} \space \color{#64748b}{\pm \textsf{1.35}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{26.27}} \space \color{#64748b}{\pm \textsf{3.61}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{2.64}} \space \color{#64748b}{\pm \textsf{0.85}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{7.47}} \space \color{#64748b}{\pm \textsf{2.95}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{69.76}} \space \color{#64748b}{\pm \textsf{6.5}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball AOSOA}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{18.43}} \space \color{#64748b}{\pm \textsf{4.74}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{11.05}} \space \color{#64748b}{\pm \textsf{1.56}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{6.08}} \space \color{#64748b}{\pm \textsf{3.08}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{18.17}} \space \color{#64748b}{\pm \textsf{3.11}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{2.75}} \space \color{#64748b}{\pm \textsf{0.77}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{8.84}} \space \color{#64748b}{\pm \textsf{2.40}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{65.32}} \space \color{#64748b}{\pm \textsf{7.1}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket foolish}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{301.15}} \space \color{#64748b}{\pm \textsf{9.59}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{38.51}} \space \color{#64748b}{\pm \textsf{3.77}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{30.1}} \space \color{#64748b}{\pm \textsf{2.79}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{55}} \space \color{#64748b}{\pm \textsf{2.05}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{18.88}} \space \color{#64748b}{\pm \textsf{2.82}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{31.33}} \space \color{#64748b}{\pm \textsf{2.20}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{474.97}} \space \color{#64748b}{\pm \textsf{11.44}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket mmap}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{146.16}} \space \color{#64748b}{\pm \textsf{10.68}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{38.37}} \space \color{#64748b}{\pm \textsf{2.54}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{31.89}} \space \color{#64748b}{\pm \textsf{3.02}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{59.57}} \space \color{#64748b}{\pm \textsf{3.41}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{18.42}} \space \color{#64748b}{\pm \textsf{1.37}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{31.31}} \space \color{#64748b}{\pm \textsf{1.56}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{325.72}} \space \color{#64748b}{\pm \textsf{12.07}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket avx}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{158.12}} \space \color{#64748b}{\pm \textsf{5.94}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{44.8}} \space \color{#64748b}{\pm \textsf{3.31}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{13.78}} \space \color{#64748b}{\pm \textsf{0.79}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{70.97}} \space \color{#64748b}{\pm \textsf{2.67}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{14.72}} \space \color{#64748b}{\pm \textsf{1.33}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{30.73}} \space \color{#64748b}{\pm \textsf{3.18}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{333.12}} \space \color{#64748b}{\pm \textsf{8.12}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket load=inf}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{20.67}} \space \color{#64748b}{\pm \textsf{5.08}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{22.15}} \space \color{#64748b}{\pm \textsf{5.88}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{4.87}} \space \color{#64748b}{\pm \textsf{0.59}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{37.59}} \space \color{#64748b}{\pm \textsf{7.13}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{5.7}} \space \color{#64748b}{\pm \textsf{0.94}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{13.79}} \space \color{#64748b}{\pm \textsf{3.55}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{104.77}} \space \color{#64748b}{\pm \textsf{11.18}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket prefetch}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{18.24}} \space \color{#64748b}{\pm \textsf{4.88}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{22.59}} \space \color{#64748b}{\pm \textsf{4.73}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{5.65}} \space \color{#64748b}{\pm \textsf{1.93}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{37.2}} \space \color{#64748b}{\pm \textsf{5.78}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{6.45}} \space \color{#64748b}{\pm \textsf{2.36}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{12.6}} \space \color{#64748b}{\pm \textsf{3.05}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{102.73}} \space \color{#64748b}{\pm \textsf{9.91}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket AOSOA}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{23.76}} \space \color{#64748b}{\pm \textsf{5.78}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{18.18}} \space \color{#64748b}{\pm \textsf{3.72}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{6.4}} \space \color{#64748b}{\pm \textsf{1.36}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{29.01}} \space \color{#64748b}{\pm \textsf{4.07}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{5.45}} \space \color{#64748b}{\pm \textsf{1.12}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{12.86}} \space \color{#64748b}{\pm \textsf{3.27}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{95.66}} \space \color{#64748b}{\pm \textsf{8.81}} \hss} \\
\hline
\end{array}
$$


## Dataset 2: const char* (Short Strings)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Container / Map Type}\hss} & \hbox to 100pt{\hss\textbf{Bulk Insertion}\hss} & \hbox to 100pt{\hss\textbf{Successful Lookups}\hss} & \hbox to 100pt{\hss\textbf{Unsuccessful Lookups}\hss} & \hbox to 100pt{\hss\textbf{Update Existing Keys}\hss} & \hbox to 100pt{\hss\textbf{Erasure}\hss} & \hbox to 100pt{\hss\textbf{Lookups After Erasure}\hss} & \hbox to 100pt{\hss\textbf{Total Time}\hss} \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU pb\_ds (gp)}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{49.01}} \space \color{#64748b}{\pm \textsf{6.05}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{60.53}} \space \color{#64748b}{\pm \textsf{6.98}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{59.74}} \space \color{#64748b}{\pm \textsf{5.39}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{59.44}} \space \color{#64748b}{\pm \textsf{9.48}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{9.48}} \space \color{#64748b}{\pm \textsf{1.02}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{69.18}} \space \color{#64748b}{\pm \textsf{4.70}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{307.38}} \space \color{#64748b}{\pm \textsf{15.08}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU pb\_ds (cc)}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{62.85}} \space \color{#64748b}{\pm \textsf{6.67}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{46.41}} \space \color{#64748b}{\pm \textsf{5.67}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{35.21}} \space \color{#64748b}{\pm \textsf{1.57}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{44.66}} \space \color{#64748b}{\pm \textsf{7.81}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{19.87}} \space \color{#64748b}{\pm \textsf{4.59}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{38.27}} \space \color{#64748b}{\pm \textsf{6.54}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{247.27}} \space \color{#64748b}{\pm \textsf{14.28}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU stdlib}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{157.81}} \space \color{#64748b}{\pm \textsf{21.34}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{83.3}} \space \color{#64748b}{\pm \textsf{5.60}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{95.63}} \space \color{#64748b}{\pm \textsf{19.00}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{86.61}} \space \color{#64748b}{\pm \textsf{2.89}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{59.54}} \space \color{#64748b}{\pm \textsf{7.21}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{62.34}} \space \color{#64748b}{\pm \textsf{4.38}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{545.23}} \space \color{#64748b}{\pm \textsf{30.45}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{MSVC stdlib}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{85.75}} \space \color{#64748b}{\pm \textsf{6.77}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{57.1}} \space \color{#64748b}{\pm \textsf{7.56}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{54.56}} \space \color{#64748b}{\pm \textsf{3.46}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{59.34}} \space \color{#64748b}{\pm \textsf{6.77}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{26.94}} \space \color{#64748b}{\pm \textsf{7.41}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{43.22}} \space \color{#64748b}{\pm \textsf{6.39}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{326.91}} \space \color{#64748b}{\pm \textsf{16.02}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{ankerl}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{46.92}} \space \color{#64748b}{\pm \textsf{5.03}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{31.89}} \space \color{#64748b}{\pm \textsf{3.75}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{24.13}} \space \color{#64748b}{\pm \textsf{2.88}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{37.26}} \space \color{#64748b}{\pm \textsf{6.68}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{18.65}} \space \color{#64748b}{\pm \textsf{7.17}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{30.44}} \space \color{#64748b}{\pm \textsf{4.76}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{189.29}} \space \color{#64748b}{\pm \textsf{12.9}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{phmap}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{42.04}} \space \color{#64748b}{\pm \textsf{1.95}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{41.37}} \space \color{#64748b}{\pm \textsf{1.05}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{16.05}} \space \color{#64748b}{\pm \textsf{3.50}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{45.79}} \space \color{#64748b}{\pm \textsf{4.51}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.63}} \space \color{#64748b}{\pm \textsf{1.05}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{26.46}} \space \color{#64748b}{\pm \textsf{1.44}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{183.34}} \space \color{#64748b}{\pm \textsf{6.38}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball foolish}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{235.76}} \space \color{#64748b}{\pm \textsf{15.82}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{47.84}} \space \color{#64748b}{\pm \textsf{6.65}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{32.57}} \space \color{#64748b}{\pm \textsf{0.93}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{62.23}} \space \color{#64748b}{\pm \textsf{5.58}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{17.08}} \space \color{#64748b}{\pm \textsf{1.07}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{35.68}} \space \color{#64748b}{\pm \textsf{3.34}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{431.16}} \space \color{#64748b}{\pm \textsf{18.41}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball mmap}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{130.21}} \space \color{#64748b}{\pm \textsf{19.88}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{47.73}} \space \color{#64748b}{\pm \textsf{4.60}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{32.77}} \space \color{#64748b}{\pm \textsf{4.61}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{62.55}} \space \color{#64748b}{\pm \textsf{5.22}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{17.31}} \space \color{#64748b}{\pm \textsf{1.36}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{37.71}} \space \color{#64748b}{\pm \textsf{2.46}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{328.28}} \space \color{#64748b}{\pm \textsf{21.74}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball avx}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{145.62}} \space \color{#64748b}{\pm \textsf{13.08}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{66.38}} \space \color{#64748b}{\pm \textsf{4.42}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{30.03}} \space \color{#64748b}{\pm \textsf{5.99}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{85.31}} \space \color{#64748b}{\pm \textsf{3.12}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{16.15}} \space \color{#64748b}{\pm \textsf{1.74}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{44.81}} \space \color{#64748b}{\pm \textsf{2.67}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{388.3}} \space \color{#64748b}{\pm \textsf{15.7}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball load=inf}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{26.75}} \space \color{#64748b}{\pm \textsf{9.38}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{29.7}} \space \color{#64748b}{\pm \textsf{5.84}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{9.9}} \space \color{#64748b}{\pm \textsf{1.13}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{40.67}} \space \color{#64748b}{\pm \textsf{1.01}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{8.29}} \space \color{#64748b}{\pm \textsf{1.62}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{22.02}} \space \color{#64748b}{\pm \textsf{5.63}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{137.33}} \space \color{#64748b}{\pm \textsf{12.6}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball prefetch}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{26.92}} \space \color{#64748b}{\pm \textsf{4.30}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{32.64}} \space \color{#64748b}{\pm \textsf{5.99}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.38}} \space \color{#64748b}{\pm \textsf{3.77}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{40.27}} \space \color{#64748b}{\pm \textsf{5.78}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{5.54}} \space \color{#64748b}{\pm \textsf{1.23}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{16.49}} \space \color{#64748b}{\pm \textsf{1.78}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{133.24}} \space \color{#64748b}{\pm \textsf{10.33}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball AOSOA}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{32.37}} \space \color{#64748b}{\pm \textsf{7.79}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{27.61}} \space \color{#64748b}{\pm \textsf{5.98}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{12.79}} \space \color{#64748b}{\pm \textsf{1.37}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{36.83}} \space \color{#64748b}{\pm \textsf{1.96}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{5.92}} \space \color{#64748b}{\pm \textsf{1.36}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{21.37}} \space \color{#64748b}{\pm \textsf{3.18}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{136.89}} \space \color{#64748b}{\pm \textsf{10.68}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket foolish}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{356.06}} \space \color{#64748b}{\pm \textsf{12.68}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{47.68}} \space \color{#64748b}{\pm \textsf{3.43}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{38.41}} \space \color{#64748b}{\pm \textsf{2.36}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{66.88}} \space \color{#64748b}{\pm \textsf{2.72}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{22.88}} \space \color{#64748b}{\pm \textsf{1.07}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{42.95}} \space \color{#64748b}{\pm \textsf{2.92}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{574.86}} \space \color{#64748b}{\pm \textsf{13.97}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket mmap}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{168.45}} \space \color{#64748b}{\pm \textsf{4.06}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{54.86}} \space \color{#64748b}{\pm \textsf{4.97}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{38.1}} \space \color{#64748b}{\pm \textsf{1.65}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{72.82}} \space \color{#64748b}{\pm \textsf{4.11}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{24.26}} \space \color{#64748b}{\pm \textsf{2.61}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{43.22}} \space \color{#64748b}{\pm \textsf{2.58}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{401.71}} \space \color{#64748b}{\pm \textsf{8.62}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket avx}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{194.19}} \space \color{#64748b}{\pm \textsf{11.60}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{78.41}} \space \color{#64748b}{\pm \textsf{2.40}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{24.4}} \space \color{#64748b}{\pm \textsf{1.38}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{91.22}} \space \color{#64748b}{\pm \textsf{3.57}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{20.9}} \space \color{#64748b}{\pm \textsf{2.24}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{52.55}} \space \color{#64748b}{\pm \textsf{4.56}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{461.67}} \space \color{#64748b}{\pm \textsf{13.45}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket load=inf}\hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{20.06}} \space \color{#64748b}{\pm \textsf{5.71}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{39.53}} \space \color{#64748b}{\pm \textsf{2.30}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{10.02}} \space \color{#64748b}{\pm \textsf{3.07}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{50.49}} \space \color{#64748b}{\pm \textsf{6.68}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.75}} \space \color{#64748b}{\pm \textsf{3.13}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{24.77}} \space \color{#64748b}{\pm \textsf{4.63}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{156.62}} \space \color{#64748b}{\pm \textsf{11.1}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket prefetch}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{25.01}} \space \color{#64748b}{\pm \textsf{4.40}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{42.06}} \space \color{#64748b}{\pm \textsf{3.61}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{12.04}} \space \color{#64748b}{\pm \textsf{3.40}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{52.27}} \space \color{#64748b}{\pm \textsf{4.60}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{11.04}} \space \color{#64748b}{\pm \textsf{1.51}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{25.37}} \space \color{#64748b}{\pm \textsf{1.71}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{167.79}} \space \color{#64748b}{\pm \textsf{8.39}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket AOSOA}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{26.26}} \space \color{#64748b}{\pm \textsf{4.94}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{38.28}} \space \color{#64748b}{\pm \textsf{2.83}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{13.62}} \space \color{#64748b}{\pm \textsf{3.20}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{48.23}} \space \color{#64748b}{\pm \textsf{4.13}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{9.67}} \space \color{#64748b}{\pm \textsf{1.52}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{25.39}} \space \color{#64748b}{\pm \textsf{2.85}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{161.45}} \space \color{#64748b}{\pm \textsf{8.38}} \hss} \\
\hline
\end{array}
$$


## Dataset 3: const char* (Long Strings)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Container / Map Type}\hss} & \hbox to 100pt{\hss\textbf{Bulk Insertion}\hss} & \hbox to 100pt{\hss\textbf{Successful Lookups}\hss} & \hbox to 100pt{\hss\textbf{Unsuccessful Lookups}\hss} & \hbox to 100pt{\hss\textbf{Update Existing Keys}\hss} & \hbox to 100pt{\hss\textbf{Erasure}\hss} & \hbox to 100pt{\hss\textbf{Lookups After Erasure}\hss} & \hbox to 100pt{\hss\textbf{Total Time}\hss} \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU pb\_ds (gp)}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{187.14}} \space \color{#64748b}{\pm \textsf{14.50}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{242.72}} \space \color{#64748b}{\pm \textsf{17.03}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{279.48}} \space \color{#64748b}{\pm \textsf{18.53}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{237.68}} \space \color{#64748b}{\pm \textsf{19.28}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{45.04}} \space \color{#64748b}{\pm \textsf{4.75}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{273.56}} \space \color{#64748b}{\pm \textsf{10.69}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1265.62}} \space \color{#64748b}{\pm \textsf{36.77}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU pb\_ds (cc)}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{217.03}} \space \color{#64748b}{\pm \textsf{22.74}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{219.08}} \space \color{#64748b}{\pm \textsf{12.50}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{203.38}} \space \color{#64748b}{\pm \textsf{14.78}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{204.54}} \space \color{#64748b}{\pm \textsf{21.09}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{57.11}} \space \color{#64748b}{\pm \textsf{4.15}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{176.15}} \space \color{#64748b}{\pm \textsf{18.26}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{1077.29}} \space \color{#64748b}{\pm \textsf{41.08}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{GNU stdlib}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{415.44}} \space \color{#64748b}{\pm \textsf{33.96}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{365.82}} \space \color{#64748b}{\pm \textsf{30.91}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{419.01}} \space \color{#64748b}{\pm \textsf{34.65}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{356.8}} \space \color{#64748b}{\pm \textsf{42.74}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{152.75}} \space \color{#64748b}{\pm \textsf{10.46}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{263.81}} \space \color{#64748b}{\pm \textsf{7.46}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{1973.63}} \space \color{#64748b}{\pm \textsf{72.81}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{MSVC stdlib}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{227.16}} \space \color{#64748b}{\pm \textsf{21.34}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{237.98}} \space \color{#64748b}{\pm \textsf{7.60}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{262.31}} \space \color{#64748b}{\pm \textsf{15.81}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{213.42}} \space \color{#64748b}{\pm \textsf{9.50}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{58.76}} \space \color{#64748b}{\pm \textsf{12.43}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{204.74}} \space \color{#64748b}{\pm \textsf{23.64}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1204.37}} \space \color{#64748b}{\pm \textsf{39.58}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{ankerl}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{164.57}} \space \color{#64748b}{\pm \textsf{14.28}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{175.35}} \space \color{#64748b}{\pm \textsf{8.75}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{115.15}} \space \color{#64748b}{\pm \textsf{7.61}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{155.34}} \space \color{#64748b}{\pm \textsf{11.20}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{73.3}} \space \color{#64748b}{\pm \textsf{9.68}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{140.26}} \space \color{#64748b}{\pm \textsf{4.29}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{823.97}} \space \color{#64748b}{\pm \textsf{24}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{phmap}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{183.56}} \space \color{#64748b}{\pm \textsf{7.18}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{202.83}} \space \color{#64748b}{\pm \textsf{17.89}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{113.81}} \space \color{#64748b}{\pm \textsf{22.20}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{209.09}} \space \color{#64748b}{\pm \textsf{18.71}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{50.53}} \space \color{#64748b}{\pm \textsf{4.14}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{142.45}} \space \color{#64748b}{\pm \textsf{8.41}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{902.27}} \space \color{#64748b}{\pm \textsf{36.09}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball foolish}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{362.77}} \space \color{#64748b}{\pm \textsf{22.07}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{227.69}} \space \color{#64748b}{\pm \textsf{13.30}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{179.64}} \space \color{#64748b}{\pm \textsf{20.43}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{257.35}} \space \color{#64748b}{\pm \textsf{4.34}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{61.29}} \space \color{#64748b}{\pm \textsf{4.18}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{200.68}} \space \color{#64748b}{\pm \textsf{9.60}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1289.42}} \space \color{#64748b}{\pm \textsf{34.78}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball mmap}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{259.02}} \space \color{#64748b}{\pm \textsf{25.76}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{237.23}} \space \color{#64748b}{\pm \textsf{29.50}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{167.55}} \space \color{#64748b}{\pm \textsf{14.69}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{274.1}} \space \color{#64748b}{\pm \textsf{27.82}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{62.44}} \space \color{#64748b}{\pm \textsf{2.00}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{194.51}} \space \color{#64748b}{\pm \textsf{11.85}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1194.85}} \space \color{#64748b}{\pm \textsf{51.65}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball avx}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{261.47}} \space \color{#64748b}{\pm \textsf{9.77}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{288.09}} \space \color{#64748b}{\pm \textsf{20.94}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{144.32}} \space \color{#64748b}{\pm \textsf{12.23}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{309.17}} \space \color{#64748b}{\pm \textsf{5.20}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{72.04}} \space \color{#64748b}{\pm \textsf{5.44}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{216.88}} \space \color{#64748b}{\pm \textsf{19.51}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1291.97}} \space \color{#64748b}{\pm \textsf{33.48}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball load=inf}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{123.19}} \space \color{#64748b}{\pm \textsf{9.92}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{180.05}} \space \color{#64748b}{\pm \textsf{21.08}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{89.39}} \space \color{#64748b}{\pm \textsf{13.52}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{203.25}} \space \color{#64748b}{\pm \textsf{14.17}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{42.58}} \space \color{#64748b}{\pm \textsf{3.52}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{139.93}} \space \color{#64748b}{\pm \textsf{19.50}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{778.39}} \space \color{#64748b}{\pm \textsf{36.32}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball prefetch}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{134.84}} \space \color{#64748b}{\pm \textsf{14.02}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{179.18}} \space \color{#64748b}{\pm \textsf{33.26}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{94.88}} \space \color{#64748b}{\pm \textsf{23.71}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{208.79}} \space \color{#64748b}{\pm \textsf{22.40}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{39.81}} \space \color{#64748b}{\pm \textsf{9.02}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{140.61}} \space \color{#64748b}{\pm \textsf{23.97}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{798.11}} \space \color{#64748b}{\pm \textsf{54.98}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Basketball AOSOA}\hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{141.44}} \space \color{#64748b}{\pm \textsf{6.98}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{192.83}} \space \color{#64748b}{\pm \textsf{13.89}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{122.84}} \space \color{#64748b}{\pm \textsf{5.57}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{192.73}} \space \color{#64748b}{\pm \textsf{9.28}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{42.18}} \space \color{#64748b}{\pm \textsf{4.32}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{154.74}} \space \color{#64748b}{\pm \textsf{25.05}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{846.76}} \space \color{#64748b}{\pm \textsf{31.7}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket foolish}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{408.48}} \space \color{#64748b}{\pm \textsf{20.11}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{236.82}} \space \color{#64748b}{\pm \textsf{11.07}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{185.57}} \space \color{#64748b}{\pm \textsf{7.57}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{251.77}} \space \color{#64748b}{\pm \textsf{9.83}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{67.17}} \space \color{#64748b}{\pm \textsf{4.13}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{197.33}} \space \color{#64748b}{\pm \textsf{3.39}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1347.14}} \space \color{#64748b}{\pm \textsf{26.64}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket mmap}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{268.23}} \space \color{#64748b}{\pm \textsf{29.52}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{269.52}} \space \color{#64748b}{\pm \textsf{55.84}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{205.07}} \space \color{#64748b}{\pm \textsf{21.93}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{271.82}} \space \color{#64748b}{\pm \textsf{9.91}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{73.99}} \space \color{#64748b}{\pm \textsf{4.22}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{221.97}} \space \color{#64748b}{\pm \textsf{4.91}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1310.6}} \space \color{#64748b}{\pm \textsf{67.9}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket avx}\hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{254.08}} \space \color{#64748b}{\pm \textsf{12.19}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{334.15}} \space \color{#64748b}{\pm \textsf{16.52}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{146.58}} \space \color{#64748b}{\pm \textsf{6.02}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{364.93}} \space \color{#64748b}{\pm \textsf{25.88}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{84.99}} \space \color{#64748b}{\pm \textsf{6.26}} \hss} & \hbox to 100pt{\hss \color{#ef4444}{\textsf{251.25}} \space \color{#64748b}{\pm \textsf{25.71}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{1435.98}} \space \color{#64748b}{\pm \textsf{42.75}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket load=inf}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{55.87}} \space \color{#64748b}{\pm \textsf{11.12}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{229.92}} \space \color{#64748b}{\pm \textsf{15.53}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{97.26}} \space \color{#64748b}{\pm \textsf{19.91}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{236.12}} \space \color{#64748b}{\pm \textsf{10.48}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{50.85}} \space \color{#64748b}{\pm \textsf{5.20}} \hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{139.11}} \space \color{#64748b}{\pm \textsf{4.67}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{809.13}} \space \color{#64748b}{\pm \textsf{30.33}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket prefetch}\hss} & \hbox to 100pt{\hss \color{#16a34a}{\mathbfsf{55.58}} \space \color{#64748b}{\pm \textsf{4.21}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{238.03}} \space \color{#64748b}{\pm \textsf{22.13}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{92.89}} \space \color{#64748b}{\pm \textsf{5.55}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{266.84}} \space \color{#64748b}{\pm \textsf{37.78}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{56.07}} \space \color{#64748b}{\pm \textsf{11.11}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{146.43}} \space \color{#64748b}{\pm \textsf{11.82}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{855.84}} \space \color{#64748b}{\pm \textsf{47.21}} \hss} \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\hbox to 180pt{\textbf{Store Basket AOSOA}\hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{65.75}} \space \color{#64748b}{\pm \textsf{6.39}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{210.66}} \space \color{#64748b}{\pm \textsf{18.69}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{124.16}} \space \color{#64748b}{\pm \textsf{8.06}} \hss} & \hbox to 100pt{\hss \color{#eab308}{\textsf{236.67}} \space \color{#64748b}{\pm \textsf{15.05}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{50.99}} \space \color{#64748b}{\pm \textsf{7.69}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{172.88}} \space \color{#64748b}{\pm \textsf{9.68}} \hss} & \hbox to 100pt{\hss \color{#22c55e}{\textsf{861.11}} \space \color{#64748b}{\pm \textsf{28.89}} \hss} \\
\hline
\end{array}
$$