const lang = require("./i18n");
const existlang = lang.getExistLangs();
//console.log(Object.keys(existlang).join(","));
Object.keys(existlang).map(key => {
  let ret = lang.checkLanguage(existlang[key]) ? "OK!" : "ERROR!";
  //console.log(`[ check lang ${key}:${existlang[key]} ] : ${ret}`);
});