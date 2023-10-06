cidr = int(input("Type CIDR: "))


if cidr <= 8:
    power = 8 - cidr
    hosts = 2 ** power
    subnet = 256 - hosts
    print("Subnet Mask: " + str(subnet) + ".0.0.0")
    exponent = 32 - cidr
    print("Exponent: 2^" + str(exponent))
    hosts = 2 ** exponent
    print("Hosts: " + str(hosts))
    blockSize = 2 ** power
    print("Block Size: " + str(blockSize))
    print("Octet: 1")

elif cidr <= 16:
    power = 16 - cidr
    hosts = 2 ** power
    subnet = 256 - hosts
    print("Subnet Mask: 255." + str(subnet) + ".0.0")
    exponent = 32 - cidr
    print("Exponent: 2^" + str(exponent))
    hosts = 2 ** exponent
    print("Hosts: " + str(hosts))
    blockSize = 2 ** power
    print("Block Size: " + str(blockSize))
    print("Octet: 2")

elif cidr <= 24:
    power = 24 - cidr
    hosts = 2 ** power
    subnet = 256 - hosts
    print("Subnet Mask: 255.255." + str(subnet) + ".0")
    exponent = 32 - cidr
    print("Exponent: 2^" + str(exponent))
    hosts = 2 ** exponent
    print("Hosts: " + str(hosts))
    blockSize = 2 ** power
    print("Block Size: " + str(blockSize))
    print("Octet: 3")

elif cidr <= 32:
    power = 32 - cidr
    hosts = 2 ** power
    subnet = 256 - hosts
    print("Subnet Mask: 255.255.255." + str(subnet))
    exponent = 32 - cidr
    print("Exponent: 2^" + str(exponent))
    hosts = 2 ** exponent
    print("Hosts: " + str(hosts))
    blockSize = 2 ** power
    print("Block Size: " + str(blockSize))
    print("Octet: 4")

else:
    print("Invalid CIDR")
