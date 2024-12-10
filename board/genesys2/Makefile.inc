
BOARD_PART  ?= digilentinc.com:genesys2:part0:1.1
XILINX_PART ?= xc7k325tffg900-2
CFG_DEVICE  ?= SPIx4 -size 32
CFG_PART    ?= s25fl256sxxxxxx0-spi-x1_x2_x4
CFG_BOOT    ?= -loaddata {up 0x07000000 CFG_BOOT    ?= -loaddata {up 0x07000000 /home/apurba/Side_Channel_Attacks/on_board_fpga_boot/vivado-risc-v/bare-metal/hello-world/boot.elf}
}
ROOTFS      ?= NFS
MEMORY_SIZE ?= 0x40000000
