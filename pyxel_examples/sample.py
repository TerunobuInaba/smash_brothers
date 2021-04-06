import pyxel

class App:
  def __init__(self):
    pyxel.init(100, 100)
    pyxel.run(self.update, self.draw)

  def update(self):
    if pyxel.btnp(pyxel.KEY_Q):
            pyxel.quit()

  def draw(self):
    pyxel.cls(0)

App()