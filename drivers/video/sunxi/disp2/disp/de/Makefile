ifeq ($(CONFIG_ARCH_SUN50IW1P1),y)
sub_dir = lowlevel_sun50iw1
endif

ifeq ($(CONFIG_ARCH_SUN8IW10),y)
sub_dir = lowlevel_sun8iw10
endif

ifeq ($(CONFIG_ARCH_SUN8IW11),y)
sub_dir = lowlevel_v2x
endif

ifeq ($(CONFIG_ARCH_SUN8IW17),y)
sub_dir = lowlevel_v2x
endif

ifeq ($(CONFIG_ARCH_SUN50IW2),y)
sub_dir = lowlevel_v2x
endif

ifeq ($(CONFIG_ARCH_SUN50IW6),y)
sub_dir = lowlevel_v3x
endif

ifeq ($(CONFIG_ARCH_SUN50IW3),y)
sub_dir = lowlevel_v3x
endif

-include $(obj)/de/$(sub_dir)/Makefile

