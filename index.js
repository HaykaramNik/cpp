class Peaple
{
  constructor()
  {
    this.name = "Anun";
  }

  fobj()
  {
    return this;
  }
  f2obj()
  {
    this.name = "Xcho";
    return this;
  }
}

let obj = new Peaple();
console.log(obj.fobj().f2obj());