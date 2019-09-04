print("bom dia!")
vc = float(input("Entre com a nota de VC: "))
while vc > 10:
	print("Valor incorreto para a nota de VC. Insira um valor entre 0 e 10.")
	vc = float(input("Entre com a nota de VC: "))
	pass
mve = float(input("Entre com a média de VE: "))
while mve > 10:
	print("Valor incorreto para a média de VE. Insira um valor entre 0 e 10.")
	mve = float(input("Entre com a média de VE: "))
	pass
vf = float((20 - vc - mve)/2)
if vf<4:
	vf = 4
	pass
print("Você precisa tirar "+str(vf)+" na VF")