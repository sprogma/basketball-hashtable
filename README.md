# Hash Map Benchmark Suite
Execution speeds evaluated in milliseconds. Heatmaps use logarithmic distribution (Green = Fast, Yellow = Mid, Red = Slow). Green borders highlight the column winners.


## Dataset 1: Primitive Keys (int)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Container / Map Type   } & \mathtt{  Bulk Insertion  } & \mathtt{ Successful Lookups } & \mathtt{ Unsuccessful Lookups } & \mathtt{ Update Existing Keys } & \mathtt{    Erasure     } & \mathtt{ Lookups After Erasure } & \mathtt{    Total Time    } \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (gp)         } & \mathtt{   }\color{#22c55e}{\mathtt{19.56}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.24}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{16.16}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.84}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{6.35}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.71}}\mathtt{      } & \mathtt{     }\color{#22c55e}{\mathtt{17.64}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.90}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{2.83}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.42}}\mathtt{   } & \mathtt{     }\color{#ef4444}{\mathtt{36.46}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.80}}\mathtt{      } & \mathtt{    }\color{#22c55e}{\mathtt{99}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.29}}\mathtt{    } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (cc)         } & \mathtt{   }\color{#eab308}{\mathtt{60.13}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.61}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{15.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.49}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{9.99}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.88}}\mathtt{      } & \mathtt{     }\color{#22c55e}{\mathtt{17.5}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.23}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{14.3}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.38}}\mathtt{   } & \mathtt{      }\color{#22c55e}{\mathtt{11.9}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.41}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{129.09}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.56}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU stdlib             } & \mathtt{  }\color{#eab308}{\mathtt{113.26}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.08}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{32.71}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.55}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{29.06}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.97}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{34.78}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.48}}\mathtt{     } & \mathtt{  }\color{#ef4444}{\mathtt{40.4}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.31}}\mathtt{   } & \mathtt{     }\color{#eab308}{\mathtt{22.51}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.80}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{272.72}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.72}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{MSVC stdlib            } & \mathtt{   }\color{#eab308}{\mathtt{71.19}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.10}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{33.95}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.85}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{34.74}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.17}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{36.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.38}}\mathtt{     } & \mathtt{  }\color{#ef4444}{\mathtt{25.07}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.47}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{21.81}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.32}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{222.91}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.53}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{ankerl                 } & \mathtt{   }\color{#22c55e}{\mathtt{32.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.15}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{12.18}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.75}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{8.59}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.41}}\mathtt{      } & \mathtt{     }\color{#16a34a}{\mathtt{14.13}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.45}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{6.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.69}}\mathtt{   } & \mathtt{      }\color{#22c55e}{\mathtt{8.65}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.44}}\mathtt{      } & \mathtt{   }\color{#22c55e}{\mathtt{82.54}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.08}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{phmap                  } & \mathtt{   }\color{#16a34a}{\mathtt{13.9}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.64}}\mathtt{    } & \mathtt{    }\color{#22c55e}{\mathtt{11.11}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.46}}\mathtt{    } & \mathtt{     }\color{#16a34a}{\mathtt{4.05}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.22}}\mathtt{      } & \mathtt{     }\color{#22c55e}{\mathtt{14.97}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.13}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{5.13}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.29}}\mathtt{   } & \mathtt{      }\color{#22c55e}{\mathtt{7.56}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.26}}\mathtt{      } & \mathtt{   }\color{#16a34a}{\mathtt{56.72}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.22}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball foolish     } & \mathtt{  }\color{#ef4444}{\mathtt{157.77}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.89}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{29.51}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.67}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{22.6}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.72}}\mathtt{      } & \mathtt{     }\color{#ef4444}{\mathtt{47.3}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.27}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{12.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.83}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{21.51}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.75}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{291.06}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.62}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball mmap        } & \mathtt{   }\color{#eab308}{\mathtt{88.12}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.53}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{28.59}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.37}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{21.62}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.06}}\mathtt{     } & \mathtt{     }\color{#ef4444}{\mathtt{48.04}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.57}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{11.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.94}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{22.02}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.07}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{220.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.81}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball avx         } & \mathtt{   }\color{#eab308}{\mathtt{93.17}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.73}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{33.11}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.77}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{14.6}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.78}}\mathtt{      } & \mathtt{     }\color{#ef4444}{\mathtt{57.03}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.89}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{8.13}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.80}}\mathtt{   } & \mathtt{     }\color{#eab308}{\mathtt{22.85}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.58}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{228.89}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.53}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball load=inf    } & \mathtt{   }\color{#22c55e}{\mathtt{14.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.60}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{11.45}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.22}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{4.73}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.80}}\mathtt{      } & \mathtt{     }\color{#eab308}{\mathtt{26.39}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.63}}\mathtt{     } & \mathtt{   }\color{#22c55e}{\mathtt{3.8}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.35}}\mathtt{   } & \mathtt{      }\color{#22c55e}{\mathtt{8.92}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.65}}\mathtt{      } & \mathtt{   }\color{#22c55e}{\mathtt{70.05}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.62}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball prefetch    } & \mathtt{   }\color{#22c55e}{\mathtt{16.08}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.75}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{12.9}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.23}}\mathtt{     } & \mathtt{      }\color{#22c55e}{\mathtt{4.4}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.35}}\mathtt{      } & \mathtt{     }\color{#eab308}{\mathtt{26.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.61}}\mathtt{     } & \mathtt{  }\color{#16a34a}{\mathtt{2.64}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.85}}\mathtt{   } & \mathtt{      }\color{#16a34a}{\mathtt{7.47}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.95}}\mathtt{      } & \mathtt{   }\color{#22c55e}{\mathtt{69.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.5}}\mathtt{    } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball AOSOA       } & \mathtt{   }\color{#22c55e}{\mathtt{18.43}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.74}}\mathtt{   } & \mathtt{    }\color{#16a34a}{\mathtt{11.05}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.56}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{6.08}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.08}}\mathtt{      } & \mathtt{     }\color{#22c55e}{\mathtt{18.17}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.11}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{2.75}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.77}}\mathtt{   } & \mathtt{      }\color{#22c55e}{\mathtt{8.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.40}}\mathtt{      } & \mathtt{   }\color{#22c55e}{\mathtt{65.32}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.1}}\mathtt{    } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket foolish   } & \mathtt{  }\color{#ef4444}{\mathtt{301.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.59}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{38.51}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.77}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{30.1}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.79}}\mathtt{      } & \mathtt{      }\color{#ef4444}{\mathtt{55}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.05}}\mathtt{       } & \mathtt{  }\color{#eab308}{\mathtt{18.88}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.82}}\mathtt{  } & \mathtt{     }\color{#ef4444}{\mathtt{31.33}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.20}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{474.97}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.44}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket mmap      } & \mathtt{  }\color{#ef4444}{\mathtt{146.16}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{10.68}}\mathtt{  } & \mathtt{    }\color{#ef4444}{\mathtt{38.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.54}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{31.89}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.02}}\mathtt{     } & \mathtt{     }\color{#ef4444}{\mathtt{59.57}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.41}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{18.42}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.37}}\mathtt{  } & \mathtt{     }\color{#ef4444}{\mathtt{31.31}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.56}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{325.72}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.07}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket avx       } & \mathtt{  }\color{#ef4444}{\mathtt{158.12}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.94}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{44.8}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.31}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{13.78}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.79}}\mathtt{     } & \mathtt{     }\color{#ef4444}{\mathtt{70.97}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.67}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{14.72}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.33}}\mathtt{  } & \mathtt{     }\color{#ef4444}{\mathtt{30.73}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.18}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{333.12}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.12}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket load=inf  } & \mathtt{   }\color{#22c55e}{\mathtt{20.67}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.08}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{22.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.88}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{4.87}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.59}}\mathtt{      } & \mathtt{     }\color{#eab308}{\mathtt{37.59}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.13}}\mathtt{     } & \mathtt{   }\color{#22c55e}{\mathtt{5.7}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.94}}\mathtt{   } & \mathtt{     }\color{#eab308}{\mathtt{13.79}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.55}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{104.77}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.18}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket prefetch  } & \mathtt{   }\color{#22c55e}{\mathtt{18.24}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.88}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{22.59}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.73}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{5.65}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.93}}\mathtt{      } & \mathtt{     }\color{#eab308}{\mathtt{37.2}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.78}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{6.45}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.36}}\mathtt{   } & \mathtt{      }\color{#22c55e}{\mathtt{12.6}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.05}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{102.73}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.91}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket AOSOA     } & \mathtt{   }\color{#22c55e}{\mathtt{23.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.78}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{18.18}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.72}}\mathtt{    } & \mathtt{      }\color{#22c55e}{\mathtt{6.4}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.36}}\mathtt{      } & \mathtt{     }\color{#eab308}{\mathtt{29.01}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.07}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{5.45}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.12}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{12.86}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.27}}\mathtt{      } & \mathtt{   }\color{#22c55e}{\mathtt{95.66}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.81}}\mathtt{   } \\
\hline
\end{array}
$$


## Dataset 2: const char* (Short Strings)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Container / Map Type   } & \mathtt{  Bulk Insertion  } & \mathtt{ Successful Lookups } & \mathtt{ Unsuccessful Lookups } & \mathtt{ Update Existing Keys } & \mathtt{    Erasure     } & \mathtt{ Lookups After Erasure } & \mathtt{    Total Time    } \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (gp)         } & \mathtt{   }\color{#22c55e}{\mathtt{49.01}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.05}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{60.53}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.98}}\mathtt{    } & \mathtt{     }\color{#ef4444}{\mathtt{59.74}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.39}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{59.44}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.48}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{9.48}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.02}}\mathtt{   } & \mathtt{     }\color{#ef4444}{\mathtt{69.18}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.70}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{307.38}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{15.08}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (cc)         } & \mathtt{   }\color{#eab308}{\mathtt{62.85}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.67}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{46.41}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.67}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{35.21}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.57}}\mathtt{     } & \mathtt{     }\color{#22c55e}{\mathtt{44.66}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.81}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{19.87}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.59}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{38.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.54}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{247.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.28}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU stdlib             } & \mathtt{  }\color{#eab308}{\mathtt{157.81}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{21.34}}\mathtt{  } & \mathtt{    }\color{#ef4444}{\mathtt{83.3}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.60}}\mathtt{     } & \mathtt{    }\color{#ef4444}{\mathtt{95.63}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{19.00}}\mathtt{     } & \mathtt{     }\color{#ef4444}{\mathtt{86.61}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.89}}\mathtt{     } & \mathtt{  }\color{#ef4444}{\mathtt{59.54}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.21}}\mathtt{  } & \mathtt{     }\color{#ef4444}{\mathtt{62.34}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.38}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{545.23}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{30.45}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{MSVC stdlib            } & \mathtt{   }\color{#eab308}{\mathtt{85.75}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.77}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{57.1}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.56}}\mathtt{     } & \mathtt{     }\color{#ef4444}{\mathtt{54.56}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.46}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{59.34}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.77}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{26.94}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.41}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{43.22}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.39}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{326.91}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{16.02}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{ankerl                 } & \mathtt{   }\color{#22c55e}{\mathtt{46.92}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.03}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{31.89}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.75}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{24.13}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.88}}\mathtt{     } & \mathtt{     }\color{#22c55e}{\mathtt{37.26}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.68}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{18.65}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.17}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{30.44}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.76}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{189.29}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.9}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{phmap                  } & \mathtt{   }\color{#22c55e}{\mathtt{42.04}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.95}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{41.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.05}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{16.05}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.50}}\mathtt{     } & \mathtt{     }\color{#22c55e}{\mathtt{45.79}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.51}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{11.63}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.05}}\mathtt{  } & \mathtt{     }\color{#22c55e}{\mathtt{26.46}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.44}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{183.34}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.38}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball foolish     } & \mathtt{  }\color{#ef4444}{\mathtt{235.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{15.82}}\mathtt{  } & \mathtt{    }\color{#eab308}{\mathtt{47.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.65}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{32.57}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{0.93}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{62.23}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.58}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{17.08}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.07}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{35.68}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.34}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{431.16}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{18.41}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball mmap        } & \mathtt{  }\color{#eab308}{\mathtt{130.21}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{19.88}}\mathtt{  } & \mathtt{    }\color{#eab308}{\mathtt{47.73}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.60}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{32.77}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.61}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{62.55}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.22}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{17.31}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.36}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{37.71}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.46}}\mathtt{      } & \mathtt{  }\color{#eab308}{\mathtt{328.28}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{21.74}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball avx         } & \mathtt{  }\color{#eab308}{\mathtt{145.62}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{13.08}}\mathtt{  } & \mathtt{    }\color{#ef4444}{\mathtt{66.38}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.42}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{30.03}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.99}}\mathtt{     } & \mathtt{     }\color{#ef4444}{\mathtt{85.31}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.12}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{16.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.74}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{44.81}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.67}}\mathtt{      } & \mathtt{   }\color{#ef4444}{\mathtt{388.3}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{15.7}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball load=inf    } & \mathtt{   }\color{#22c55e}{\mathtt{26.75}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.38}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{29.7}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.84}}\mathtt{     } & \mathtt{      }\color{#16a34a}{\mathtt{9.9}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.13}}\mathtt{      } & \mathtt{     }\color{#22c55e}{\mathtt{40.67}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.01}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{8.29}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.62}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{22.02}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.63}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{137.33}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.6}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball prefetch    } & \mathtt{   }\color{#22c55e}{\mathtt{26.92}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.30}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{32.64}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.99}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{11.38}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.77}}\mathtt{     } & \mathtt{     }\color{#22c55e}{\mathtt{40.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.78}}\mathtt{     } & \mathtt{  }\color{#16a34a}{\mathtt{5.54}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.23}}\mathtt{   } & \mathtt{     }\color{#16a34a}{\mathtt{16.49}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.78}}\mathtt{      } & \mathtt{  }\color{#16a34a}{\mathtt{133.24}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{10.33}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball AOSOA       } & \mathtt{   }\color{#22c55e}{\mathtt{32.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.79}}\mathtt{   } & \mathtt{    }\color{#16a34a}{\mathtt{27.61}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.98}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{12.79}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.37}}\mathtt{     } & \mathtt{     }\color{#16a34a}{\mathtt{36.83}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.96}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{5.92}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.36}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{21.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.18}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{136.89}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{10.68}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket foolish   } & \mathtt{  }\color{#ef4444}{\mathtt{356.06}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.68}}\mathtt{  } & \mathtt{    }\color{#eab308}{\mathtt{47.68}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.43}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{38.41}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.36}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{66.88}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.72}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{22.88}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.07}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{42.95}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.92}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{574.86}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{13.97}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket mmap      } & \mathtt{  }\color{#ef4444}{\mathtt{168.45}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.06}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{54.86}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.97}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{38.1}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.65}}\mathtt{      } & \mathtt{     }\color{#ef4444}{\mathtt{72.82}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.11}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{24.26}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.61}}\mathtt{  } & \mathtt{     }\color{#eab308}{\mathtt{43.22}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.58}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{401.71}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.62}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket avx       } & \mathtt{  }\color{#ef4444}{\mathtt{194.19}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.60}}\mathtt{  } & \mathtt{    }\color{#ef4444}{\mathtt{78.41}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.40}}\mathtt{    } & \mathtt{     }\color{#eab308}{\mathtt{24.4}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.38}}\mathtt{      } & \mathtt{     }\color{#ef4444}{\mathtt{91.22}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.57}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{20.9}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.24}}\mathtt{   } & \mathtt{     }\color{#ef4444}{\mathtt{52.55}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.56}}\mathtt{      } & \mathtt{  }\color{#ef4444}{\mathtt{461.67}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{13.45}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket load=inf  } & \mathtt{   }\color{#16a34a}{\mathtt{20.06}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.71}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{39.53}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.30}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{10.02}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.07}}\mathtt{     } & \mathtt{     }\color{#22c55e}{\mathtt{50.49}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.68}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{11.75}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.13}}\mathtt{  } & \mathtt{     }\color{#22c55e}{\mathtt{24.77}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.63}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{156.62}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.1}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket prefetch  } & \mathtt{   }\color{#22c55e}{\mathtt{25.01}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.40}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{42.06}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.61}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{12.04}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.40}}\mathtt{     } & \mathtt{     }\color{#eab308}{\mathtt{52.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.60}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{11.04}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.51}}\mathtt{  } & \mathtt{     }\color{#22c55e}{\mathtt{25.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.71}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{167.79}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.39}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket AOSOA     } & \mathtt{   }\color{#22c55e}{\mathtt{26.26}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.94}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{38.28}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.83}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{13.62}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.20}}\mathtt{     } & \mathtt{     }\color{#22c55e}{\mathtt{48.23}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.13}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{9.67}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{1.52}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{25.39}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.85}}\mathtt{      } & \mathtt{  }\color{#22c55e}{\mathtt{161.45}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.38}}\mathtt{   } \\
\hline
\end{array}
$$


## Dataset 3: const char* (Long Strings)


$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Container / Map Type   } & \mathtt{  Bulk Insertion  } & \mathtt{ Successful Lookups } & \mathtt{ Unsuccessful Lookups } & \mathtt{ Update Existing Keys } & \mathtt{     Erasure      } & \mathtt{ Lookups After Erasure } & \mathtt{    Total Time     } \\
\hline
\end{array}
$$

$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (gp)         } & \mathtt{  }\color{#eab308}{\mathtt{187.14}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.50}}\mathtt{  } & \mathtt{   }\color{#eab308}{\mathtt{242.72}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{17.03}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{279.48}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{18.53}}\mathtt{    } & \mathtt{    }\color{#eab308}{\mathtt{237.68}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{19.28}}\mathtt{    } & \mathtt{   }\color{#22c55e}{\mathtt{45.04}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.75}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{273.56}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{10.69}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1265.62}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{36.77}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU pb\_ds (cc)         } & \mathtt{  }\color{#eab308}{\mathtt{217.03}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{22.74}}\mathtt{  } & \mathtt{   }\color{#22c55e}{\mathtt{219.08}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.50}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{203.38}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.78}}\mathtt{    } & \mathtt{    }\color{#22c55e}{\mathtt{204.54}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{21.09}}\mathtt{    } & \mathtt{   }\color{#22c55e}{\mathtt{57.11}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.15}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{176.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{18.26}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{1077.29}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{41.08}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{GNU stdlib             } & \mathtt{  }\color{#ef4444}{\mathtt{415.44}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{33.96}}\mathtt{  } & \mathtt{   }\color{#ef4444}{\mathtt{365.82}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{30.91}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{419.01}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{34.65}}\mathtt{    } & \mathtt{    }\color{#ef4444}{\mathtt{356.8}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{42.74}}\mathtt{     } & \mathtt{  }\color{#ef4444}{\mathtt{152.75}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{10.46}}\mathtt{  } & \mathtt{     }\color{#ef4444}{\mathtt{263.81}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.46}}\mathtt{     } & \mathtt{  }\color{#ef4444}{\mathtt{1973.63}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{72.81}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{MSVC stdlib            } & \mathtt{  }\color{#eab308}{\mathtt{227.16}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{21.34}}\mathtt{  } & \mathtt{   }\color{#eab308}{\mathtt{237.98}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.60}}\mathtt{    } & \mathtt{    }\color{#eab308}{\mathtt{262.31}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{15.81}}\mathtt{    } & \mathtt{    }\color{#eab308}{\mathtt{213.42}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.50}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{58.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.43}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{204.74}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{23.64}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1204.37}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{39.58}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{ankerl                 } & \mathtt{  }\color{#eab308}{\mathtt{164.57}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.28}}\mathtt{  } & \mathtt{   }\color{#16a34a}{\mathtt{175.35}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.75}}\mathtt{    } & \mathtt{    }\color{#22c55e}{\mathtt{115.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.61}}\mathtt{     } & \mathtt{    }\color{#16a34a}{\mathtt{155.34}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.20}}\mathtt{    } & \mathtt{   }\color{#eab308}{\mathtt{73.3}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.68}}\mathtt{    } & \mathtt{     }\color{#22c55e}{\mathtt{140.26}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.29}}\mathtt{     } & \mathtt{    }\color{#22c55e}{\mathtt{823.97}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{24}}\mathtt{    } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{phmap                  } & \mathtt{  }\color{#eab308}{\mathtt{183.56}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.18}}\mathtt{   } & \mathtt{   }\color{#22c55e}{\mathtt{202.83}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{17.89}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{113.81}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{22.20}}\mathtt{    } & \mathtt{    }\color{#22c55e}{\mathtt{209.09}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{18.71}}\mathtt{    } & \mathtt{   }\color{#22c55e}{\mathtt{50.53}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.14}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{142.45}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.41}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{902.27}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{36.09}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball foolish     } & \mathtt{  }\color{#ef4444}{\mathtt{362.77}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{22.07}}\mathtt{  } & \mathtt{   }\color{#22c55e}{\mathtt{227.69}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{13.30}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{179.64}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{20.43}}\mathtt{    } & \mathtt{    }\color{#eab308}{\mathtt{257.35}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.34}}\mathtt{     } & \mathtt{   }\color{#22c55e}{\mathtt{61.29}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.18}}\mathtt{   } & \mathtt{     }\color{#eab308}{\mathtt{200.68}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.60}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1289.42}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{34.78}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball mmap        } & \mathtt{  }\color{#ef4444}{\mathtt{259.02}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{25.76}}\mathtt{  } & \mathtt{   }\color{#eab308}{\mathtt{237.23}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{29.50}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{167.55}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.69}}\mathtt{    } & \mathtt{    }\color{#eab308}{\mathtt{274.1}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{27.82}}\mathtt{     } & \mathtt{   }\color{#22c55e}{\mathtt{62.44}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{2.00}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{194.51}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.85}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1194.85}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{51.65}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball avx         } & \mathtt{  }\color{#ef4444}{\mathtt{261.47}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.77}}\mathtt{   } & \mathtt{   }\color{#eab308}{\mathtt{288.09}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{20.94}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{144.32}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.23}}\mathtt{    } & \mathtt{    }\color{#ef4444}{\mathtt{309.17}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.20}}\mathtt{     } & \mathtt{   }\color{#eab308}{\mathtt{72.04}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.44}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{216.88}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{19.51}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1291.97}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{33.48}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball load=inf    } & \mathtt{  }\color{#eab308}{\mathtt{123.19}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.92}}\mathtt{   } & \mathtt{   }\color{#22c55e}{\mathtt{180.05}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{21.08}}\mathtt{   } & \mathtt{    }\color{#16a34a}{\mathtt{89.39}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{13.52}}\mathtt{     } & \mathtt{    }\color{#22c55e}{\mathtt{203.25}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.17}}\mathtt{    } & \mathtt{   }\color{#22c55e}{\mathtt{42.58}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.52}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{139.93}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{19.50}}\mathtt{     } & \mathtt{  }\color{#16a34a}{\mathtt{778.39}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{36.32}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball prefetch    } & \mathtt{  }\color{#eab308}{\mathtt{134.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{14.02}}\mathtt{  } & \mathtt{   }\color{#22c55e}{\mathtt{179.18}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{33.26}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{94.88}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{23.71}}\mathtt{     } & \mathtt{    }\color{#22c55e}{\mathtt{208.79}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{22.40}}\mathtt{    } & \mathtt{   }\color{#16a34a}{\mathtt{39.81}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.02}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{140.61}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{23.97}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{798.11}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{54.98}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Basketball AOSOA       } & \mathtt{  }\color{#eab308}{\mathtt{141.44}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.98}}\mathtt{   } & \mathtt{   }\color{#22c55e}{\mathtt{192.83}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{13.89}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{122.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.57}}\mathtt{     } & \mathtt{    }\color{#22c55e}{\mathtt{192.73}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.28}}\mathtt{     } & \mathtt{   }\color{#22c55e}{\mathtt{42.18}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.32}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{154.74}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{25.05}}\mathtt{     } & \mathtt{   }\color{#22c55e}{\mathtt{846.76}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{31.7}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket foolish   } & \mathtt{  }\color{#ef4444}{\mathtt{408.48}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{20.11}}\mathtt{  } & \mathtt{   }\color{#eab308}{\mathtt{236.82}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.07}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{185.57}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.57}}\mathtt{     } & \mathtt{    }\color{#eab308}{\mathtt{251.77}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.83}}\mathtt{     } & \mathtt{   }\color{#eab308}{\mathtt{67.17}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.13}}\mathtt{   } & \mathtt{     }\color{#eab308}{\mathtt{197.33}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{3.39}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1347.14}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{26.64}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket mmap      } & \mathtt{  }\color{#ef4444}{\mathtt{268.23}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{29.52}}\mathtt{  } & \mathtt{   }\color{#eab308}{\mathtt{269.52}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{55.84}}\mathtt{   } & \mathtt{    }\color{#eab308}{\mathtt{205.07}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{21.93}}\mathtt{    } & \mathtt{    }\color{#eab308}{\mathtt{271.82}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.91}}\mathtt{     } & \mathtt{   }\color{#eab308}{\mathtt{73.99}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.22}}\mathtt{   } & \mathtt{     }\color{#eab308}{\mathtt{221.97}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.91}}\mathtt{     } & \mathtt{   }\color{#eab308}{\mathtt{1310.6}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{67.9}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket avx       } & \mathtt{  }\color{#ef4444}{\mathtt{254.08}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{12.19}}\mathtt{  } & \mathtt{   }\color{#ef4444}{\mathtt{334.15}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{16.52}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{146.58}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.02}}\mathtt{     } & \mathtt{    }\color{#ef4444}{\mathtt{364.93}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{25.88}}\mathtt{    } & \mathtt{   }\color{#eab308}{\mathtt{84.99}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.26}}\mathtt{   } & \mathtt{    }\color{#ef4444}{\mathtt{251.25}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{25.71}}\mathtt{     } & \mathtt{  }\color{#eab308}{\mathtt{1435.98}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{42.75}}\mathtt{  } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket load=inf  } & \mathtt{  }\color{#22c55e}{\mathtt{55.87}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.12}}\mathtt{   } & \mathtt{   }\color{#eab308}{\mathtt{229.92}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{15.53}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{97.26}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{19.91}}\mathtt{     } & \mathtt{    }\color{#eab308}{\mathtt{236.12}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{10.48}}\mathtt{    } & \mathtt{   }\color{#22c55e}{\mathtt{50.85}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.20}}\mathtt{   } & \mathtt{     }\color{#16a34a}{\mathtt{139.11}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.67}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{809.13}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{30.33}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket prefetch  } & \mathtt{   }\color{#16a34a}{\mathtt{55.58}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{4.21}}\mathtt{   } & \mathtt{   }\color{#eab308}{\mathtt{238.03}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{22.13}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{92.89}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{5.55}}\mathtt{     } & \mathtt{    }\color{#eab308}{\mathtt{266.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{37.78}}\mathtt{    } & \mathtt{  }\color{#22c55e}{\mathtt{56.07}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.11}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{146.43}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{11.82}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{855.84}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{47.21}}\mathtt{   } \\
\hline
\end{array}
$$
$$
\begin{array}{l|c | c | c | c | c | c | c}
\mathtt{Store Basket AOSOA     } & \mathtt{   }\color{#22c55e}{\mathtt{65.75}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{6.39}}\mathtt{   } & \mathtt{   }\color{#22c55e}{\mathtt{210.66}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{18.69}}\mathtt{   } & \mathtt{    }\color{#22c55e}{\mathtt{124.16}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{8.06}}\mathtt{     } & \mathtt{    }\color{#eab308}{\mathtt{236.67}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{15.05}}\mathtt{    } & \mathtt{   }\color{#22c55e}{\mathtt{50.99}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{7.69}}\mathtt{   } & \mathtt{     }\color{#22c55e}{\mathtt{172.88}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{9.68}}\mathtt{     } & \mathtt{  }\color{#22c55e}{\mathtt{861.11}}\mathtt{\ \pm\ }\color{#64748b}{\mathtt{28.89}}\mathtt{   } \\
\hline
\end{array}
$$