#define __NR_exit 1
#define __NR_fork 2
#define __NR_read 3
#define __NR_write 4
#define __NR_open 5
#define __NR_close 6
#define __NR_wait4 7
#define __NR_creat 8
#define __NR_link 9
#define __NR_unlink 10
#define __NR_execv 11
#define __NR_chdir 12
#define __NR_chown 13
#define __NR_mknod 14
#define __NR_chmod 15
#define __NR_lchown 16
#define __NR_brk 17
#define __NR_perfctr 18
#define __NR_lseek 19
#define __NR_getpid 20
#define __NR_capget 21
#define __NR_capset 22
#define __NR_setuid 23
#define __NR_getuid 24
#define __NR_ptrace 26
#define __NR_alarm 27
#define __NR_sigaltstack 28
#define __NR_pause 29
#define __NR_utime 30
#define __NR_lchown32 31
#define __NR_fchown32 32
#define __NR_access 33
#define __NR_nice 34
#define __NR_chown32 35
#define __NR_sync 36
#define __NR_kill 37
#define __NR_stat 38
#define __NR_sendfile 39
#define __NR_lstat 40
#define __NR_dup 41
#define __NR_pipe 42
#define __NR_times 43
#define __NR_getuid32 44
#define __NR_umount2 45
#define __NR_setgid 46
#define __NR_getgid 47
#define __NR_signal 48
#define __NR_geteuid 49
#define __NR_getegid 50
#define __NR_acct 51
#define __NR_getgid32 53
#define __NR_ioctl 54
#define __NR_reboot 55
#define __NR_mmap2 56
#define __NR_symlink 57
#define __NR_readlink 58
#define __NR_execve 59
#define __NR_umask 60
#define __NR_chroot 61
#define __NR_fstat 62
#define __NR_fstat64 63
#define __NR_getpagesize 64
#define __NR_msync 65
#define __NR_vfork 66
#define __NR_pread 67
#define __NR_pwrite 68
#define __NR_geteuid32 69
#define __NR_getegid32 70
#define __NR_mmap 71
#define __NR_setreuid32 72
#define __NR_munmap 73
#define __NR_mprotect 74
#define __NR_madvise 75
#define __NR_vhangup 76
#define __NR_truncate64 77
#define __NR_mincore 78
#define __NR_getgroups 79
#define __NR_setgroups 80
#define __NR_getpgrp 81
#define __NR_setgroups32 82
#define __NR_setitimer 83
#define __NR_ftruncate64 84
#define __NR_swapon 85
#define __NR_getitimer 86
#define __NR_setuid32 87
#define __NR_sethostname 88
#define __NR_setgid32 89
#define __NR_dup2 90
#define __NR_setfsuid32 91
#define __NR_fcntl 92
#define __NR_select 93
#define __NR_setfsgid32 94
#define __NR_fsync 95
#define __NR_setpriority 96
#define __NR_socket 97
#define __NR_connect 98
#define __NR_accept 99
#define __NR_getpriority 100
#define __NR_rt_sigreturn 101
#define __NR_rt_sigaction 102
#define __NR_rt_sigprocmask 103
#define __NR_rt_sigpending 104
#define __NR_rt_sigtimedwait 105
#define __NR_rt_sigqueueinfo 106
#define __NR_rt_sigsuspend 107
#define __NR_setresuid32 108
#define __NR_getresuid32 109
#define __NR_setresgid32 110
#define __NR_getresgid32 111
#define __NR_setregid32 112
#define __NR_recvmsg 113
#define __NR_sendmsg 114
#define __NR_getgroups32 115
#define __NR_gettimeofday 116
#define __NR_getrusage 117
#define __NR_getsockopt 118
#define __NR_getcwd 119
#define __NR_readv 120
#define __NR_writev 121
#define __NR_settimeofday 122
#define __NR_fchown 123
#define __NR_fchmod 124
#define __NR_recvfrom 125
#define __NR_setreuid 126
#define __NR_setregid 127
#define __NR_rename 128
#define __NR_truncate 129
#define __NR_ftruncate 130
#define __NR_flock 131
#define __NR_lstat64 132
#define __NR_sendto 133
#define __NR_shutdown 134
#define __NR_socketpair 135
#define __NR_mkdir 136
#define __NR_rmdir 137
#define __NR_utimes 138
#define __NR_stat64 139
#define __NR_sendfile64 140
#define __NR_getpeername 141
#define __NR_futex 142
#define __NR_gettid 143
#define __NR_getrlimit 144
#define __NR_setrlimit 145
#define __NR_pivot_root 146
#define __NR_prctl 147
#define __NR_pciconfig_read 148
#define __NR_pciconfig_write 149
#define __NR_getsockname 150
#define __NR_poll 153
#define __NR_getdents64 154
#define __NR_fcntl64 155
#define __NR_statfs 157
#define __NR_fstatfs 158
#define __NR_umount 159
#define __NR_sched_set_affinity 160
#define __NR_sched_get_affinity 161
#define __NR_getdomainname 162
#define __NR_setdomainname 163
#define __NR_quotactl 165
#define __NR_set_tid_address 166
#define __NR_mount 167
#define __NR_ustat 168
#define __NR_setxattr 169
#define __NR_lsetxattr 170
#define __NR_fsetxattr 171
#define __NR_getxattr 172
#define __NR_lgetxattr 173
#define __NR_getdents 174
#define __NR_setsid 175
#define __NR_fchdir 176
#define __NR_fgetxattr 177
#define __NR_listxattr 178
#define __NR_llistxattr 179
#define __NR_flistxattr 180
#define __NR_removexattr 181
#define __NR_lremovexattr 182
#define __NR_sigpending 183
#define __NR_query_module 184
#define __NR_setpgid 185
#define __NR_fremovexattr 186
#define __NR_tkill 187
#define __NR_exit_group 188
#define __NR_uname 189
#define __NR_init_module 190
#define __NR_personality 191
#define __NR_remap_file_pages 192
#define __NR_epoll_create 193
#define __NR_epoll_ctl 194
#define __NR_epoll_wait 195
#define __NR_getppid 197
#define __NR_sigaction 198
#define __NR_sgetmask 199
#define __NR_ssetmask 200
#define __NR_sigsuspend 201
#define __NR_oldlstat 202
#define __NR_uselib 203
#define __NR_readdir 204
#define __NR_readahead 205
#define __NR_socketcall 206
#define __NR_syslog 207
#define __NR_lookup_dcookie 208
#define __NR_fadvise64 209
#define __NR_fadvise64_64 210
#define __NR_tgkill 211
#define __NR_waitpid 212
#define __NR_swapoff 213
#define __NR_sysinfo 214
#define __NR_ipc 215
#define __NR_sigreturn 216
#define __NR_clone 217
#define __NR_adjtimex 219
#define __NR_sigprocmask 220
#define __NR_create_module 221
#define __NR_delete_module 222
#define __NR_get_kernel_syms 223
#define __NR_getpgid 224
#define __NR_bdflush 225
#define __NR_sysfs 226
#define __NR_afs_syscall 227
#define __NR_setfsuid 228
#define __NR_setfsgid 229
#define __NR__newselect 230
#define __NR_time 231
#define __NR_stime 233
#define __NR_statfs64 234
#define __NR_fstatfs64 235
#define __NR__llseek 236
#define __NR_mlock 237
#define __NR_munlock 238
#define __NR_mlockall 239
#define __NR_munlockall 240
#define __NR_sched_setparam 241
#define __NR_sched_getparam 242
#define __NR_sched_setscheduler 243
#define __NR_sched_getscheduler 244
#define __NR_sched_yield 245
#define __NR_sched_get_priority_max 246
#define __NR_sched_get_priority_min 247
#define __NR_sched_rr_get_interval 248
#define __NR_nanosleep 249
#define __NR_mremap 250
#define __NR__sysctl 251
#define __NR_getsid 252
#define __NR_fdatasync 253
#define __NR_nfsservctl 254
#define __NR_aplib 255
#define __NR_clock_settime 256
#define __NR_clock_gettime 257
#define __NR_clock_getres 258
#define __NR_clock_nanosleep 259
#define __NR_sched_getaffinity 260
#define __NR_sched_setaffinity 261
#define __NR_timer_settime 262
#define __NR_timer_gettime 263
#define __NR_timer_getoverrun 264
#define __NR_timer_delete 265
#define __NR_timer_create 266
#define __NR_io_setup 268
#define __NR_io_destroy 269
#define __NR_io_submit 270
#define __NR_io_cancel 271
#define __NR_io_getevents 272
#define __NR_mq_open 273
#define __NR_mq_unlink 274
#define __NR_mq_timedsend 275
#define __NR_mq_timedreceive 276
#define __NR_mq_notify 277
#define __NR_mq_getsetattr 278
#define __NR_waitid 279
#define __NR_sys_setaltroot 280
#define __NR_add_key 281
#define __NR_request_key 282
#define __NR_keyctl 283
#define __NR_openat 284
#define __NR_mkdirat 285
#define __NR_mknodat 286
#define __NR_fchownat 287
#define __NR_futimesat 288
#define __NR_fstatat64 289
#define __NR_unlinkat 290
#define __NR_renameat 291
#define __NR_linkat 292
#define __NR_symlinkat 293
#define __NR_readlinkat 294
#define __NR_fchmodat 295
#define __NR_faccessat 296
#define __NR_pselect6 297
#define __NR_ppoll 298
#define __NR_unshare 299
#define __NR_set_robust_list 300
#define __NR_get_robust_list 301
#define __NR_migrate_pages 302
#define __NR_mbind 303
#define __NR_get_mempolicy 304
#define __NR_set_mempolicy 305
#define __NR_kexec_load 306
#define __NR_move_pages 307
#define __NR_getcpu 308
#define __NR_epoll_pwait 309
#define __NR_utimensat 310
#define __NR_signalfd 311
#define __NR_timerfd 312
#define __NR_eventfd 313
#define __NR_fallocate 314
#define __NR_timerfd_settime 315
#define __NR_timerfd_gettime 316
#define MAP_32BIT 0x40
#define INADDR_ANY 0
#define INADDR_BROADCAST 0xffffffff
#define INADDR_NONE 0xffffffff
#define INADDR_LOOPBACK 0x7f000001
#define EPERM 1
#define ENOENT 2
#define ESRCH 3
#define EINTR 4
#define EIO 5
#define ENXIO 6
#define E2BIG 7
#define ENOEXEC 8
#define EBADF 9
#define ECHILD 10
#define EAGAIN 11
#define ENOMEM 12
#define EACCES 13
#define EFAULT 14
#define ENOTBLK 15
#define EBUSY 16
#define EEXIST 17
#define EXDEV 18
#define ENODEV 19
#define ENOTDIR 20
#define EISDIR 21
#define EINVAL 22
#define ENFILE 23
#define EMFILE 24
#define ENOTTY 25
#define ETXTBSY 26
#define EFBIG 27
#define ENOSPC 28
#define ESPIPE 29
#define EROFS 30
#define EMLINK 31
#define EPIPE 32
#define EDOM 33
#define ERANGE 34
#define EWOULDBLOCK 11
#define EINPROGRESS 36
#define EALREADY 37
#define ENOTSOCK 38
#define EDESTADDRREQ 39
#define EMSGSIZE 40
#define EPROTOTYPE 41
#define ENOPROTOOPT 42
#define EPROTONOSUPPORT 43
#define ESOCKTNOSUPPORT 44
#define EOPNOTSUPP 45
#define ENOTSUP 45
#define EPFNOSUPPORT 46
#define EAFNOSUPPORT 47
#define EADDRINUSE 48
#define EADDRNOTAVAIL 49
#define ENETDOWN 50
#define ENETUNREACH 51
#define ENETRESET 52
#define ECONNABORTED 53
#define ECONNRESET 54
#define ENOBUFS 55
#define EISCONN 56
#define ENOTCONN 57
#define ESHUTDOWN 58
#define ETOOMANYREFS 59
#define ETIMEDOUT 60
#define ECONNREFUSED 61
#define ELOOP 62
#define ENAMETOOLONG 63
#define EHOSTDOWN 64
#define EHOSTUNREACH 65
#define ENOTEMPTY 66
#define EPROCLIM 67
#define EUSERS 68
#define EDQUOT 69
#define ESTALE 70
#define EREMOTE 71
#define ENOSTR 72
#define ETIME 73
#define ENOSR 74
#define ENOMSG 75
#define EBADMSG 76
#define EIDRM 77
#define EDEADLK 78
#define ENOLCK 79
#define ENONET 80
#define ERREMOTE 81
#define ENOLINK 82
#define EADV 83
#define ESRMNT 84
#define ECOMM 85
#define EPROTO 86
#define EMULTIHOP 87
#define EDOTDOT 88
#define EREMCHG 89
#define ENOSYS 90
#define ESTRPIPE 91
#define EOVERFLOW 92
#define EBADFD 93
#define ECHRNG 94
#define EL2NSYNC 95
#define EL3HLT 96
#define EL3RST 97
#define ELNRNG 98
#define EUNATCH 99
#define ENOCSI 100
#define EL2HLT 101
#define EBADE 102
#define EBADR 103
#define EXFULL 104
#define ENOANO 105
#define EBADRQC 106
#define EBADSLT 107
#define EDEADLOCK 108
#define EBFONT 109
#define ELIBEXEC 110
#define ENODATA 111
#define ELIBBAD 112
#define ENOPKG 113
#define ELIBACC 114
#define ENOTUNIQ 115
#define ERESTART 116
#define EUCLEAN 117
#define ENOTNAM 118
#define ENAVAIL 119
#define EISNAM 120
#define EREMOTEIO 121
#define EILSEQ 122
#define ELIBMAX 123
#define ELIBSCN 124
#define ENOMEDIUM 125
#define EMEDIUMTYPE 126
#define ECANCELED 127
#define ENOKEY 128
#define EKEYEXPIRED 129
#define EKEYREVOKED 130
#define EKEYREJECTED 131
#define __SYS_NERR ((131) + 1)
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321
#define __BYTE_ORDER 4321
#define __FLOAT_WORD_ORDER 4321
#define LITTLE_ENDIAN 1234
#define BIG_ENDIAN 4321
#define BYTE_ORDER 4321
#define __WORDSIZE 32
#define __FSUID_H 1
#define NSIG 32
#define _NSIG 64
#define SIGHUP 1
#define SIGINT 2
#define SIGQUIT 3
#define SIGILL 4
#define SIGTRAP 5
#define SIGABRT 6
#define SIGIOT 6
#define SIGFPE 8
#define SIGKILL 9
#define SIGSEGV 11
#define SIGPIPE 13
#define SIGALRM 14
#define SIGTERM 15
#define SIGUNUSED 31
#define SIGEMT 7
#define SIGBUS 10
#define SIGSYS 12
#define SIGURG 16
#define SIGSTOP 17
#define SIGTSTP 18
#define SIGCONT 19
#define SIGCHLD 20
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGIO 23
#define SIGXCPU 24
#define SIGXFSZ 25
#define SIGVTALRM 26
#define SIGPROF 27
#define SIGWINCH 28
#define SIGPWR 29
#define SIGUSR1 30
#define SIGUSR2 31
#define SIGCLD 20
#define SIGPOLL 23
#define SIGLOST 29
#define SIGRTMIN 32
#define SIGRTMAX (64-1)
#define SV_SSTACK 1
#define SV_INTR 2
#define SV_RESET 4
#define SV_IGNCHILD 8
#define SA_NOCLDSTOP 8
#define SA_STACK 1
#define SA_ONSTACK 1
#define SA_RESTART 2
#define SA_RESETHAND 4
#define SA_INTERRUPT 0x10
#define SA_NODEFER 0x20
#define SA_SHIRQ 0x40
#define SA_NOCLDWAIT 0x100
#define SA_SIGINFO 0x200
#define SA_NOMASK 0x20
#define SA_ONESHOT 4
#define SS_ONSTACK 1
#define SS_DISABLE 2
#define MINSIGSTKSZ 2048
#define SIGSTKSZ 8192
#define SIG_BLOCK 1
#define SIG_UNBLOCK 2
#define SIG_SETMASK 4
#define SI_MAX_SIZE 128
#define SIGEV_SIGNAL 0
#define SIGEV_NONE 1
#define SIGEV_THREAD 2
#define SIGEV_THREAD_ID 4
#define SIGEV_MAX_SIZE 64
#define _SYS_TIME_H 1
#define ITIMER_REAL 0
#define ITIMER_VIRTUAL 1
#define ITIMER_PROF 2
#define __SUNOS_MAXWIN 31
#define MC_TSTATE 0
#define MC_PC 1
#define MC_NPC 2
#define MC_Y 3
#define MC_G1 4
#define MC_G2 5
#define MC_G3 6
#define MC_G4 7
#define MC_G5 8
#define MC_G6 9
#define MC_G7 10
#define MC_O0 11
#define MC_O1 12
#define MC_O2 13
#define MC_O3 14
#define MC_O4 15
#define MC_O5 16
#define MC_O6 17
#define MC_O7 18
#define MC_NGREG 19
#define MC_MAXFPQ 16
#define FD_SETSIZE 1024
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define _CS_PATH 1
#define _SC_CLK_TCK 1
#define _SC_ARG_MAX 2
#define _SC_NGROUPS_MAX 3
#define _SC_OPEN_MAX 4
#define _SC_PAGESIZE 5
#define _SC_NPROCESSORS_ONLN 6
#define _SC_NPROCESSORS_CONF 6
#define _SC_PHYS_PAGES 7
#define _PC_PATH_MAX 1
#define _PC_VDISABLE 2
#define L_cuserid 17
#define _POSIX_VERSION 199506
#define F_ULOCK 0
#define F_LOCK 1
#define F_TLOCK 2
#define F_TEST 3
#define S_IFMT 0xf000
#define S_IFSOCK 0xc000
#define S_IFLNK 0xa000
#define S_IFREG 0x8000
#define S_IFBLK 0x6000
#define S_IFDIR 0x4000
#define S_IFCHR 0x2000
#define S_IFIFO 0x1000
#define S_ISUID 0x800
#define S_ISGID 0x400
#define S_ISVTX 0x200
#define S_IRWXU 0x1c0
#define S_IRUSR 0x100
#define S_IWUSR 0x80
#define S_IXUSR 0x40
#define S_IRWXG 0x38
#define S_IRGRP 0x20
#define S_IWGRP 0x10
#define S_IXGRP 0x8
#define S_IRWXO 0x7
#define S_IROTH 0x4
#define S_IWOTH 0x2
#define S_IXOTH 0x1
#define S_IREAD 0x100
#define S_IWRITE 0x80
#define S_IEXEC 0x40
#define F_LINUX_SPECIFIC_BASE 1024
#define O_RDONLY 0x0000
#define O_WRONLY 0x0001
#define O_RDWR 0x0002
#define O_ACCMODE 0x0003
#define O_APPEND 0x0008
#define FASYNC 0x0040
#define O_CREAT 0x0200
#define O_TRUNC 0x0400
#define O_EXCL 0x0800
#define O_SYNC 0x2000
#define O_NONBLOCK 0x4000
#define O_NDELAY (0x0004 | 0x4000)
#define O_NOCTTY 0x8000
#define O_DIRECTORY 0x10000
#define O_NOFOLLOW 0x20000
#define O_LARGEFILE 0x40000
#define O_DIRECT 0x100000
#define O_NOATIME 0x200000
#define F_DUPFD 0
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
#define F_GETOWN 5
#define F_SETOWN 6
#define F_GETLK 7
#define F_SETLK 8
#define F_SETLKW 9
#define F_SETSIG 10
#define F_GETSIG 11
#define F_GETLK64 12
#define F_SETLK64 13
#define F_SETLKW64 14
#define FD_CLOEXEC 1
#define F_RDLCK 1
#define F_WRLCK 2
#define F_UNLCK 3
#define F_EXLCK 4
#define F_SHLCK 8
#define F_INPROGRESS 16
#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_NB 4
#define LOCK_UN 8
#define LOCK_MAND 32
#define LOCK_READ 64
#define LOCK_WRITE 128
#define LOCK_RW 192
#define O_ASYNC 0x0040
#define MREMAP_MAYMOVE 1
#define MREMAP_FIXED 2
#define PROT_READ 0x1
#define PROT_WRITE 0x2
#define PROT_EXEC 0x4
#define PROT_NONE 0x0
#define MAP_SHARED 0x01
#define MAP_PRIVATE 0x02
#define MAP_FIXED 0x10
#define MAP_ANONYMOUS 0x20
#define MAP_RENAME 0x20
#define MAP_NORESERVE 0x40
#define MAP_INHERIT 0x80
#define MAP_LOCKED 0x100
#define _MAP_NEW 0x80000000
#define MAP_GROWSDOWN 0x0100
#define MAP_DENYWRITE 0x0800
#define MAP_EXECUTABLE 0x1000
#define MAP_POPULATE 0x8000
#define MS_ASYNC 1
#define MS_INVALIDATE 2
#define MS_SYNC 4
#define MCL_CURRENT 0x2000
#define MCL_FUTURE 0x4000
#define MADV_NORMAL 0x0
#define MADV_RANDOM 0x1
#define MADV_SEQUENTIAL 0x2
#define MADV_WILLNEED 0x3
#define MADV_DONTNEED 0x4
#define MADV_FREE 0x5
#define MAP_ANON 0x20
#define MAP_FILE 0
#define SOL_SOCKET 0xffff
#define SO_DEBUG 0x0001
#define SO_PASSCRED 0x0002
#define SO_REUSEADDR 0x0004
#define SO_KEEPALIVE 0x0008
#define SO_DONTROUTE 0x0010
#define SO_BROADCAST 0x0020
#define SO_PEERCRED 0x0040
#define SO_LINGER 0x0080
#define SO_OOBINLINE 0x0100
#define SO_BSDCOMPAT 0x0400
#define SO_RCVLOWAT 0x0800
#define SO_SNDLOWAT 0x1000
#define SO_RCVTIMEO 0x2000
#define SO_SNDTIMEO 0x4000
#define SO_ACCEPTCONN 0x8000
#define SO_DONTLINGER (~0x0080)
#define SO_SNDBUF 0x1001
#define SO_RCVBUF 0x1002
#define SO_SNDBUFFORCE 0x100a
#define SO_RCVBUFFORCE 0x100b
#define SO_ERROR 0x1007
#define SO_TYPE 0x1008
#define SO_ATTACH_FILTER 0x001a
#define SO_DETACH_FILTER 0x001b
#define SO_PEERNAME 0x001c
#define SO_TIMESTAMP 0x001d
#define SCM_TIMESTAMP 0x001d
#define SO_SECURITY_AUTHENTICATION 0x5001
#define SO_SECURITY_ENCRYPTION_TRANSPORT 0x5002
#define SO_SECURITY_ENCRYPTION_NETWORK 0x5004
#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_RAW 3
#define SOCK_RDM 4
#define SOCK_SEQPACKET 5
#define SOCK_PACKET 10
#define UIO_FASTIOV 8
#define UIO_MAXIOV 1024
#define SCM_RIGHTS 0x01
#define SCM_CREDENTIALS 0x02
#define SCM_CONNECT 0x03
#define AF_UNSPEC 0
#define AF_UNIX 1
#define AF_LOCAL 1
#define AF_INET 2
#define AF_AX25 3
#define AF_IPX 4
#define AF_APPLETALK 5
#define AF_NETROM 6
#define AF_BRIDGE 7
#define AF_ATMPVC 8
#define AF_X25 9
#define AF_INET6 10
#define AF_ROSE 11
#define AF_DECnet 12
#define AF_NETBEUI 13
#define AF_SECURITY 14
#define AF_KEY 15
#define AF_NETLINK 16
#define AF_ROUTE 16
#define AF_PACKET 17
#define AF_ASH 18
#define AF_ECONET 19
#define AF_ATMSVC 20
#define AF_SNA 22
#define AF_IRDA 23
#define AF_PPPOX 24
#define AF_WANPIPE 25
#define AF_MAX 32
#define PF_UNSPEC 0
#define PF_UNIX 1
#define PF_LOCAL 1
#define PF_INET 2
#define PF_AX25 3
#define PF_IPX 4
#define PF_APPLETALK 5
#define PF_NETROM 6
#define PF_BRIDGE 7
#define PF_ATMPVC 8
#define PF_X25 9
#define PF_INET6 10
#define PF_ROSE 11
#define PF_DECnet 12
#define PF_NETBEUI 13
#define PF_SECURITY 14
#define PF_KEY 15
#define PF_NETLINK 16
#define PF_ROUTE 16
#define PF_PACKET 17
#define PF_ASH 18
#define PF_ECONET 19
#define PF_ATMSVC 20
#define PF_SNA 22
#define PF_IRDA 23
#define PF_PPPOX 24
#define PF_WANPIPE 25
#define PF_MAX 32
#define SOMAXCONN 128
#define MSG_OOB 1
#define MSG_PEEK 2
#define MSG_DONTROUTE 4
#define MSG_TRYHARD 4
#define MSG_CTRUNC 8
#define MSG_PROBE 0x10
#define MSG_TRUNC 0x20
#define MSG_DONTWAIT 0x40
#define MSG_EOR 0x80
#define MSG_WAITALL 0x100
#define MSG_FIN 0x200
#define MSG_EOF 0x200
#define MSG_SYN 0x400
#define MSG_CONFIRM 0x800
#define MSG_RST 0x1000
#define MSG_ERRQUEUE 0x2000
#define MSG_NOSIGNAL 0x4000
#define MSG_MORE 0x8000
#define SOL_IP 0
#define SOL_TCP 6
#define SOL_UDP 17
#define SOL_IPV6 41
#define SOL_ICMPV6 58
#define SOL_RAW 255
#define SOL_IPX 256
#define SOL_AX25 257
#define SOL_ATALK 258
#define SOL_NETROM 259
#define SOL_ROSE 260
#define SOL_DECNET 261
#define SOL_X25 262
#define SOL_PACKET 263
#define SOL_ATM 264
#define SOL_AAL 265
#define SOL_IRDA 266
#define IPX_TYPE 1
#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2
#define NI_NOFQDN 1
#define NI_NUMERICHOST 2
#define NI_NAMEREQD 4
#define NI_NUMERICSERV 8
#define NI_DGRAM 16
#define EAI_FAMILY -1
#define EAI_SOCKTYPE -2
#define EAI_BADFLAGS -3
#define EAI_NONAME -4
#define EAI_SERVICE -5
#define EAI_ADDRFAMILY -6
#define EAI_NODATA -7
#define EAI_MEMORY -8
#define EAI_FAIL -9
#define EAI_AGAIN -10
#define EAI_SYSTEM -11
#define AI_NUMERICHOST 1
#define AI_CANONNAME 2
#define AI_PASSIVE 4
#define SIOCADDRT 0x890B
#define SIOCDELRT 0x890C
#define SIOCRTMSG 0x890D
#define SIOCGIFNAME 0x8910
#define SIOCSIFLINK 0x8911
#define SIOCGIFCONF 0x8912
#define SIOCGIFFLAGS 0x8913
#define SIOCSIFFLAGS 0x8914
#define SIOCGIFADDR 0x8915
#define SIOCSIFADDR 0x8916
#define SIOCGIFDSTADDR 0x8917
#define SIOCSIFDSTADDR 0x8918
#define SIOCGIFBRDADDR 0x8919
#define SIOCSIFBRDADDR 0x891a
#define SIOCGIFNETMASK 0x891b
#define SIOCSIFNETMASK 0x891c
#define SIOCGIFMETRIC 0x891d
#define SIOCSIFMETRIC 0x891e
#define SIOCGIFMEM 0x891f
#define SIOCSIFMEM 0x8920
#define SIOCGIFMTU 0x8921
#define SIOCSIFMTU 0x8922
#define SIOCSIFNAME 0x8923
#define SIOCSIFHWADDR 0x8924
#define SIOCGIFENCAP 0x8925
#define SIOCSIFENCAP 0x8926
#define SIOCGIFHWADDR 0x8927
#define SIOCGIFSLAVE 0x8929
#define SIOCSIFSLAVE 0x8930
#define SIOCADDMULTI 0x8931
#define SIOCDELMULTI 0x8932
#define SIOCGIFINDEX 0x8933
#define SIOGIFINDEX 0x8933
#define SIOCSIFPFLAGS 0x8934
#define SIOCGIFPFLAGS 0x8935
#define SIOCDIFADDR 0x8936
#define SIOCSIFHWBROADCAST 0x8937
#define SIOCGIFCOUNT 0x8938
#define SIOCGIFBR 0x8940
#define SIOCSIFBR 0x8941
#define SIOCGIFTXQLEN 0x8942
#define SIOCSIFTXQLEN 0x8943
#define SIOCGIFDIVERT 0x8944
#define SIOCSIFDIVERT 0x8945
#define SIOCETHTOOL 0x8946
#define SIOCDARP 0x8953
#define SIOCGARP 0x8954
#define SIOCSARP 0x8955
#define SIOCDRARP 0x8960
#define SIOCGRARP 0x8961
#define SIOCSRARP 0x8962
#define SIOCGIFMAP 0x8970
#define SIOCSIFMAP 0x8971
#define SIOCADDDLCI 0x8980
#define SIOCDELDLCI 0x8981
#define SIOCDEVPRIVATE 0x89F0
#define PTRACE_TRACEME 0
#define PTRACE_PEEKTEXT 1
#define PTRACE_PEEKDATA 2
#define PTRACE_PEEKUSR 3
#define PTRACE_PEEKUSER 3
#define PTRACE_POKETEXT 4
#define PTRACE_POKEDATA 5
#define PTRACE_POKEUSR 6
#define PTRACE_POKEUSER 6
#define PTRACE_CONT 7
#define PTRACE_KILL 8
#define PTRACE_SINGLESTEP 9
#define PTRACE_ATTACH 0x10
#define PTRACE_DETACH 0x11
#define PTRACE_SYSCALL 24
#define PTRACE_GETEVENTMSG 0x4201
#define PTRACE_GETSIGINFO 0x4202
#define PTRACE_SETSIGINFO 0x4203
#define PTRACE_O_TRACESYSGOOD 0x00000001
#define PTRACE_O_TRACEFORK 0x00000002
#define PTRACE_O_TRACEVFORK 0x00000004
#define PTRACE_O_TRACECLONE 0x00000008
#define PTRACE_O_TRACEEXEC 0x00000010
#define PTRACE_O_TRACEVFORKDONE 0x00000020
#define PTRACE_O_TRACEEXIT 0x00000040
#define PTRACE_O_MASK 0x0000007f
#define PTRACE_EVENT_FORK 1
#define PTRACE_EVENT_VFORK 2
#define PTRACE_EVENT_CLONE 3
#define PTRACE_EVENT_EXEC 4
#define PTRACE_EVENT_VFORK_DONE 5
#define PTRACE_EVENT_EXIT 6
#define PT_TRACE_ME 0
#define PT_READ_I 1
#define PT_READ_D 2
#define PT_READ_U 3
#define PT_WRITE_I 4
#define PT_WRITE_D 5
#define PT_WRITE_U 6
#define PT_CONTINUE 7
#define PT_KILL 8
#define PT_STEP 9
#define PT_ATTACH 0x10
#define PT_DETACH 0x11
#define UREG_G0 0
#define UREG_G1 1
#define UREG_G2 2
#define UREG_G3 3
#define UREG_G4 4
#define UREG_G5 5
#define UREG_G6 6
#define UREG_G7 7
#define UREG_I0 8
#define UREG_I1 9
#define UREG_I2 10
#define UREG_I3 11
#define UREG_I4 12
#define UREG_I5 13
#define UREG_I6 14
#define UREG_I7 15
#define UREG_WIM 0
#define UREG_FADDR 0
#define UREG_FP 14
#define UREG_RETPC 15
#define PT_PSR 0x0
#define PT_PC 0x4
#define PT_NPC 0x8
#define PT_Y 0xc
#define PT_G0 0x10
#define PT_WIM 0x10
#define PT_G1 0x14
#define PT_G2 0x18
#define PT_G3 0x1c
#define PT_G4 0x20
#define PT_G5 0x24
#define PT_G6 0x28
#define PT_G7 0x2c
#define PT_I0 0x30
#define PT_I1 0x34
#define PT_I2 0x38
#define PT_I3 0x3c
#define PT_I4 0x40
#define PT_I5 0x44
#define PT_I6 0x48
#define PT_FP 0x48
#define PT_I7 0x4c
#define RW_L0 0x00
#define RW_L1 0x04
#define RW_L2 0x08
#define RW_L3 0x0c
#define RW_L4 0x10
#define RW_L5 0x14
#define RW_L6 0x18
#define RW_L7 0x1c
#define RW_I0 0x20
#define RW_I1 0x24
#define RW_I2 0x28
#define RW_I3 0x2c
#define RW_I4 0x30
#define RW_I5 0x34
#define RW_I6 0x38
#define RW_I7 0x3c
#define SF_L0 0x00
#define SF_L1 0x04
#define SF_L2 0x08
#define SF_L3 0x0c
#define SF_L4 0x10
#define SF_L5 0x14
#define SF_L6 0x18
#define SF_L7 0x1c
#define SF_I0 0x20
#define SF_I1 0x24
#define SF_I2 0x28
#define SF_I3 0x2c
#define SF_I4 0x30
#define SF_I5 0x34
#define SF_FP 0x38
#define SF_PC 0x3c
#define SF_RETP 0x40
#define SF_XARG0 0x44
#define SF_XARG1 0x48
#define SF_XARG2 0x4c
#define SF_XARG3 0x50
#define SF_XARG4 0x54
#define SF_XARG5 0x58
#define SF_XXARG 0x5c
#define PTRACE_SUNATTACH 10
#define PTRACE_SUNDETACH 11
#define PTRACE_GETREGS 12
#define PTRACE_SETREGS 13
#define PTRACE_GETFPREGS 14
#define PTRACE_SETFPREGS 15
#define PTRACE_READDATA 16
#define PTRACE_WRITEDATA 17
#define PTRACE_READTEXT 18
#define PTRACE_WRITETEXT 19
#define PTRACE_GETFPAREGS 20
#define PTRACE_SETFPAREGS 21
#define PTRACE_GETUCODE 29
#define SYS_accept 99
#define SYS_access 33
#define SYS_acct 51
#define SYS_add_key 281
#define SYS_adjtimex 219
#define SYS_afs_syscall 227
#define SYS_alarm 27
#define SYS_aplib 255
#define SYS_bdflush 225
#define SYS_brk 17
#define SYS_capget 21
#define SYS_capset 22
#define SYS_chdir 12
#define SYS_chmod 15
#define SYS_chown 13
#define SYS_chown32 35
#define SYS_chroot 61
#define SYS_clock_getres 258
#define SYS_clock_gettime 257
#define SYS_clock_nanosleep 259
#define SYS_clock_settime 256
#define SYS_clone 217
#define SYS_close 6
#define SYS_connect 98
#define SYS_creat 8
#define SYS_create_module 221
#define SYS_delete_module 222
#define SYS_dup 41
#define SYS_dup2 90
#define SYS_epoll_create 193
#define SYS_epoll_ctl 194
#define SYS_epoll_pwait 309
#define SYS_epoll_wait 195
#define SYS_eventfd 313
#define SYS_execv 11
#define SYS_execve 59
#define SYS_exit 1
#define SYS_exit_group 188
#define SYS_faccessat 296
#define SYS_fadvise64 209
#define SYS_fadvise64_64 210
#define SYS_fallocate 314
#define SYS_fchdir 176
#define SYS_fchmod 124
#define SYS_fchmodat 295
#define SYS_fchown 123
#define SYS_fchown32 32
#define SYS_fchownat 287
#define SYS_fcntl 92
#define SYS_fcntl64 155
#define SYS_fdatasync 253
#define SYS_fgetxattr 177
#define SYS_flistxattr 180
#define SYS_flock 131
#define SYS_fork 2
#define SYS_fremovexattr 186
#define SYS_fsetxattr 171
#define SYS_fstat 62
#define SYS_fstat64 63
#define SYS_fstatat64 289
#define SYS_fstatfs 158
#define SYS_fstatfs64 235
#define SYS_fsync 95
#define SYS_ftruncate 130
#define SYS_ftruncate64 84
#define SYS_futex 142
#define SYS_futimesat 288
#define SYS_getcpu 308
#define SYS_getcwd 119
#define SYS_getdents 174
#define SYS_getdents64 154
#define SYS_getdomainname 162
#define SYS_getegid 50
#define SYS_getegid32 70
#define SYS_geteuid 49
#define SYS_geteuid32 69
#define SYS_getgid 47
#define SYS_getgid32 53
#define SYS_getgroups 79
#define SYS_getgroups32 115
#define SYS_getitimer 86
#define SYS_get_kernel_syms 223
#define SYS_get_mempolicy 304
#define SYS_getpagesize 64
#define SYS_getpeername 141
#define SYS_getpgid 224
#define SYS_getpgrp 81
#define SYS_getpid 20
#define SYS_getppid 197
#define SYS_getpriority 100
#define SYS_getresgid32 111
#define SYS_getresuid32 109
#define SYS_getrlimit 144
#define SYS_get_robust_list 301
#define SYS_getrusage 117
#define SYS_getsid 252
#define SYS_getsockname 150
#define SYS_getsockopt 118
#define SYS_gettid 143
#define SYS_gettimeofday 116
#define SYS_getuid 24
#define SYS_getuid32 44
#define SYS_getxattr 172
#define SYS_init_module 190
#define SYS_io_cancel 271
#define SYS_ioctl 54
#define SYS_io_destroy 269
#define SYS_io_getevents 272
#define SYS_io_setup 268
#define SYS_io_submit 270
#define SYS_ipc 215
#define SYS_kexec_load 306
#define SYS_keyctl 283
#define SYS_kill 37
#define SYS_lchown 16
#define SYS_lchown32 31
#define SYS_lgetxattr 173
#define SYS_link 9
#define SYS_linkat 292
#define SYS_listxattr 178
#define SYS_llistxattr 179
#define SYS__llseek 236
#define SYS_lookup_dcookie 208
#define SYS_lremovexattr 182
#define SYS_lseek 19
#define SYS_lsetxattr 170
#define SYS_lstat 40
#define SYS_lstat64 132
#define SYS_madvise 75
#define SYS_mbind 303
#define SYS_migrate_pages 302
#define SYS_mincore 78
#define SYS_mkdir 136
#define SYS_mkdirat 285
#define SYS_mknod 14
#define SYS_mknodat 286
#define SYS_mlock 237
#define SYS_mlockall 239
#define SYS_mmap 71
#define SYS_mmap2 56
#define SYS_mount 167
#define SYS_move_pages 307
#define SYS_mprotect 74
#define SYS_mq_getsetattr 278
#define SYS_mq_notify 277
#define SYS_mq_open 273
#define SYS_mq_timedreceive 276
#define SYS_mq_timedsend 275
#define SYS_mq_unlink 274
#define SYS_mremap 250
#define SYS_msync 65
#define SYS_munlock 238
#define SYS_munlockall 240
#define SYS_munmap 73
#define SYS_nanosleep 249
#define SYS__newselect 230
#define SYS_nfsservctl 254
#define SYS_nice 34
#define SYS_oldlstat 202
#define SYS_open 5
#define SYS_openat 284
#define SYS_pause 29
#define SYS_pciconfig_read 148
#define SYS_pciconfig_write 149
#define SYS_perfctr 18
#define SYS_personality 191
#define SYS_pipe 42
#define SYS_pivot_root 146
#define SYS_poll 153
#define SYS_ppoll 298
#define SYS_prctl 147
#define SYS_pread 67
#define SYS_pselect6 297
#define SYS_ptrace 26
#define SYS_pwrite 68
#define SYS_query_module 184
#define SYS_quotactl 165
#define SYS_read 3
#define SYS_readahead 205
#define SYS_readdir 204
#define SYS_readlink 58
#define SYS_readlinkat 294
#define SYS_readv 120
#define SYS_reboot 55
#define SYS_recvfrom 125
#define SYS_recvmsg 113
#define SYS_remap_file_pages 192
#define SYS_removexattr 181
#define SYS_rename 128
#define SYS_renameat 291
#define SYS_request_key 282
#define SYS_rmdir 137
#define SYS_rt_sigaction 102
#define SYS_rt_sigpending 104
#define SYS_rt_sigprocmask 103
#define SYS_rt_sigqueueinfo 106
#define SYS_rt_sigreturn 101
#define SYS_rt_sigsuspend 107
#define SYS_rt_sigtimedwait 105
#define SYS_sched_getaffinity 260
#define SYS_sched_get_affinity 161
#define SYS_sched_getparam 242
#define SYS_sched_get_priority_max 246
#define SYS_sched_get_priority_min 247
#define SYS_sched_getscheduler 244
#define SYS_sched_rr_get_interval 248
#define SYS_sched_setaffinity 261
#define SYS_sched_set_affinity 160
#define SYS_sched_setparam 241
#define SYS_sched_setscheduler 243
#define SYS_sched_yield 245
#define SYS_select 93
#define SYS_sendfile 39
#define SYS_sendfile64 140
#define SYS_sendmsg 114
#define SYS_sendto 133
#define SYS_setdomainname 163
#define SYS_setfsgid 229
#define SYS_setfsgid32 94
#define SYS_setfsuid 228
#define SYS_setfsuid32 91
#define SYS_setgid 46
#define SYS_setgid32 89
#define SYS_setgroups 80
#define SYS_setgroups32 82
#define SYS_sethostname 88
#define SYS_setitimer 83
#define SYS_set_mempolicy 305
#define SYS_setpgid 185
#define SYS_setpriority 96
#define SYS_setregid 127
#define SYS_setregid32 112
#define SYS_setresgid32 110
#define SYS_setresuid32 108
#define SYS_setreuid 126
#define SYS_setreuid32 72
#define SYS_setrlimit 145
#define SYS_set_robust_list 300
#define SYS_setsid 175
#define SYS_set_tid_address 166
#define SYS_settimeofday 122
#define SYS_setuid 23
#define SYS_setuid32 87
#define SYS_setxattr 169
#define SYS_sgetmask 199
#define SYS_shutdown 134
#define SYS_sigaction 198
#define SYS_sigaltstack 28
#define SYS_signal 48
#define SYS_signalfd 311
#define SYS_sigpending 183
#define SYS_sigprocmask 220
#define SYS_sigreturn 216
#define SYS_sigsuspend 201
#define SYS_socket 97
#define SYS_socketcall 206
#define SYS_socketpair 135
#define SYS_ssetmask 200
#define SYS_stat 38
#define SYS_stat64 139
#define SYS_statfs 157
#define SYS_statfs64 234
#define SYS_stime 233
#define SYS_swapoff 213
#define SYS_swapon 85
#define SYS_symlink 57
#define SYS_symlinkat 293
#define SYS_sync 36
#define SYS__sysctl 251
#define SYS_sysfs 226
#define SYS_sysinfo 214
#define SYS_syslog 207
#define SYS_sys_setaltroot 280
#define SYS_tgkill 211
#define SYS_time 231
#define SYS_timer_create 266
#define SYS_timer_delete 265
#define SYS_timerfd 312
#define SYS_timerfd_gettime 316
#define SYS_timerfd_settime 315
#define SYS_timer_getoverrun 264
#define SYS_timer_gettime 263
#define SYS_timer_settime 262
#define SYS_times 43
#define SYS_tkill 187
#define SYS_truncate 129
#define SYS_truncate64 77
#define SYS_umask 60
#define SYS_umount 159
#define SYS_umount2 45
#define SYS_uname 189
#define SYS_unlink 10
#define SYS_unlinkat 290
#define SYS_unshare 299
#define SYS_uselib 203
#define SYS_ustat 168
#define SYS_utime 30
#define SYS_utimensat 310
#define SYS_utimes 138
#define SYS_vfork 66
#define SYS_vhangup 76
#define SYS_wait4 7
#define SYS_waitid 279
#define SYS_waitpid 212
#define SYS_write 4
#define SYS_writev 121