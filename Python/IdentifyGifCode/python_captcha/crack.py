from PIL import Image

im = Image.open("captcha.gif")
#（将图片转换为8位像素模式）
im.convert("P")
# 打印颜色直方图
# 颜色直方图的每一位数字都代表了在图片中含有对应位的颜色的像素的数量
print(im.histogram())
# 每个像素点可表现 256 种颜色，白点是最多（有 625 个白色像素）。
# 红像素在序号 200 左右，我们可以通过排序，得到有用的颜色。
his = im.histogram()
values = {}

# 将得到的颜色直方图存入values字典中
for i in range(256):
    values[i] = his[i]
# print(values)

# 反序排列，拿到前十比较大的
for j,k in sorted(values.items(),key=lambda x:x[1],reverse = True)[:10]:
    print(j, k)
