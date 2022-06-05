#include<linux/types.h>

/* Common BPF/XDP functions used by userspace side programs */
#ifndef __COMMON_USER_BPF_XDP_H
#define __COMMON_USER_BPF_XDP_H

int xdp_link_attach(int ifindex, __u32 xdp_flags, int prog_fd);
int xdp_link_detach(int ifindex, __u32 xdp_flags, __u32 expected_prog_id);
int init_map_fd(struct bpf_object* obj, const char* map_name);

#endif /* __COMMON_USER_BPF_XDP_H */
