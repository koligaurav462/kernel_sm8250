[1mdiff --git a/kernel/sched/core.c b/kernel/sched/core.c[m
[1mindex 2d5dfe9ed624..fe3b9ac72054 100644[m
[1m--- a/kernel/sched/core.c[m
[1m+++ b/kernel/sched/core.c[m
[36m@@ -8289,7 +8289,7 @@[m [mstatic void uclamp_set(struct cgroup_subsys_state *css)[m
 				"uclamp_latency_sensitive=%d cpu_shares=%d\n",[m
 				tgt.name, tgt.uclamp_min, tgt.uclamp_max, tgt.uclamp_latency_sensitive, tgt.cpu_shares);[m
 #else[m
[31m-                        pr_info("uclamp_assist: setting values for %s: uclamp_min=%s uclamp_max=%s uclamp_latency_sensitive=%d\n"[m
[32m+[m[32m                        pr_info("uclamp_assist: setting values for %s: uclamp_min=%s uclamp_max=%s uclamp_latency_sensitive=%d\n",[m
                                 tgt.name, tgt.uclamp_min, tgt.uclamp_max, tgt.uclamp_latency_sensitive);[m
 #endif[m
 			return;[m
