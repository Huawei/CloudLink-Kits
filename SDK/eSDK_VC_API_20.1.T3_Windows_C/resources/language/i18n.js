//根据Code获取语言
module.exports.getLanguage = (code, path) => {
  try {
    const language = {};
    if (deFaultPackage[code]) {
      require("fs")
        .readdirSync(require("path").join(__dirname, code.toString()))
        .filter(filename => /\.js$/.test(filename))
        .map(filename => {
          Object.assign(language, require(`./${code.toString()}/${filename}`));
        });
    } else if (path) {
      require("fs")
        .readdirSync(path + "/" + code.toString())
        .filter(filename => /\.js$/.test(filename))
        .map(filename => {
          Object.assign(language, require(`${path}/${code.toString()}/${filename}`));
        });
    }

    return language;
  } catch (error) {
    return false;
  }
};

//根据Code获取语言
module.exports.checkLanguage = (code, path) => {
  try {
    const language = {};
    if (deFaultPackage[code.toString()]) {
      return true;
    }
    if (path) {
      require("fs")
        .readdirSync(path + "/" + code)
        .map(filename => {
          Object.assign(language, require(`${path}/${code}/${filename}`));
        });
    }
    return true;
  } catch (error) {
    return false;
  }
};

//获取所有现在已有的语言包
module.exports.getExistLangs = path => {
  const languageNameMap = {};
  Object.assign(languageNameMap, { ["English"]: "1033" });
  Object.assign(languageNameMap, { ["简体中文"]: "2052" });
  Object.assign(languageNameMap, { ["Français"]: "1036" });
  Object.assign(languageNameMap, { ["русский"]: "1049" });
  Object.assign(languageNameMap, { ["Español(España)"]: "3082" });
  Object.assign(languageNameMap, { ["Español(Latinoamerica)"]: "2058" });
  Object.assign(languageNameMap, { ["Português(Portugal)"]: "2070" });
  Object.assign(languageNameMap, { ["Português(Brasil)"]: "1046" });
  Object.assign(languageNameMap, { ["繁体中文"]: "3076" });
  Object.assign(languageNameMap, { ["Türk dili"]: "1055" });
  Object.assign(languageNameMap, { ["Italiana"]: "1040" });
  Object.assign(languageNameMap, { ["ไทย"]: "1054" });
  if (path) {
    require("fs")
      .readdirSync(path)
      .forEach(code => (code && !isNaN(new Number(code)) && i18n[code] ? Object.assign(languageNameMap, { [i18n[code]]: code }) : null));
  }
  return languageNameMap;
};

//i18n对应表
const i18n = {
  //一级语种
  1: "ar", //阿拉伯语
  2: "bg", //保加利亚语
  3: "ca", //加泰罗尼亚语
  4: "zh-Hans", //中文（简体）
  5: "cs", //捷克语
  6: "da", //丹麦语
  7: "de", //德语
  8: "el", //希腊语
  9: "en", //英语
  10: "es", //西班牙语
  11: "fi", //芬兰语
  12: "fr", //法语
  13: "he", //希伯来语
  14: "hu", //匈牙利语
  15: "is", //冰岛语
  16: "it", //意大利语
  17: "ja", //日语
  18: "ko", //朝鲜语
  19: "nl", //荷兰语
  20: "no", //挪威语
  21: "pl", //波兰语
  22: "pt", //葡萄牙语
  24: "ro", //罗马尼亚语
  25: "ru", //俄语
  26: "hr", //克罗地亚语
  27: "sk", //斯洛伐克语
  28: "sq", //阿尔巴尼亚语
  29: "sv", //瑞典语
  30: "th", //泰语
  31: "tr", //土耳其语
  32: "ur", //乌尔都语
  33: "id", //印度尼西亚语
  34: "uk", //乌克兰语
  35: "be", //白俄罗斯语
  36: "sl", //斯洛文尼亚语
  37: "et", //爱沙尼亚语
  38: "lv", //拉脱维亚语
  39: "lt", //立陶宛语
  41: "fa", //波斯语
  42: "vi", //越南语
  43: "hy", //亚美尼亚语
  44: "az", //阿泽里语
  45: "eu", //巴斯克语
  47: "mk", //马其顿语
  54: "af", //南非荷兰语
  55: "ka", //格鲁吉亚语
  56: "fo", //法罗语
  57: "hi", //印地语
  62: "ms", //马来语
  63: "kk", //哈萨克语
  64: "ky", //吉尔吉斯语
  65: "sw", //斯瓦希里语
  67: "uz", //乌兹别克语
  68: "tt", //鞑靼语
  70: "pa", //旁遮普语
  71: "gu", //古吉拉特语
  73: "ta", //泰米尔语
  74: "te", //泰卢固语
  75: "kn", //卡纳达语
  78: "mr", //马拉地语
  79: "sa", //梵语
  80: "mn", //蒙古语
  86: "gl", //加利西亚语
  87: "kok", //贡根语
  90: "syr", //叙利亚语
  101: "dv", //迪维希语
  //地区语种
  1025: "ar-SA", //阿拉伯语（沙特阿拉伯）
  1026: "bg-BG", //保加利亚语（保加利亚）
  1027: "ca-ES", //加泰罗尼亚语（加泰罗尼亚地区）
  1028: "zh-TW", //中文（台湾）
  1029: "cs-CZ", //捷克语（捷克共和国）
  1030: "da-DK", //丹麦语（丹麦）
  1031: "Deutsch", //德语（德国）
  1032: "el-GR", //希腊语（希腊）
  1033: "English", //英语（美国）
  1034: "Español", //西班牙语
  1035: "fi-FI", //芬兰语（芬兰）
  1036: "Français", //法语（法国）
  1037: "he-IL", //希伯来语（以色列）
  1038: "hu-HU", //匈牙利语（匈牙利）
  1039: "is-IS", //冰岛语（冰岛）
  1040: "Italiana", //意大利语（意大利）
  1041: "ja-JP", //日语（日本）
  1042: "ko-KR", //朝鲜语（韩国）
  1043: "nl-NL", //荷兰语（荷兰）
  1044: "nb-NO", //挪威语（伯克梅尔，挪威）
  1045: "pl-PL", //波兰语（波兰）
  1046: "Português(Brasil)", //葡萄牙语（巴西）
  1048: "ro-RO", //罗马尼亚语（罗马尼亚）
  1049: "русский", //俄语（俄罗斯）
  1050: "hr-HR", //克罗地亚语（克罗地亚）
  1051: "sk-SK", //斯洛伐克语（斯洛伐克）
  1052: "sq-AL", //阿尔巴尼亚语（阿尔巴尼亚）
  1053: "sv-SE", //瑞典语（瑞典）
  1054: "ไทย", //泰语（泰国）
  1055: "Türk dili", //土耳其语（土耳其）
  1056: "ur-PK", //乌尔都语（巴基斯坦）
  1057: "id-ID", //印度尼西亚语（印度尼西亚）
  1058: "uk-UA", //乌克兰语（乌克兰）
  1059: "be-BY", //白俄罗斯语（白俄罗斯）
  1060: "sl-SI", //斯洛文尼亚语（斯洛文尼亚）
  1061: "et-EE", //爱沙尼亚语（爱沙尼亚）
  1062: "lv-LV", //拉脱维亚语（拉脱维亚）
  1063: "lt-LT", //立陶宛语（立陶宛）
  1065: "fa-IR", //波斯语（伊朗）
  1066: "vi-VN", //越南语（越南）
  1067: "hy-AM", //亚美尼亚语（亚美尼亚）
  1068: "az-Latn-AZ", //阿泽里语（阿塞拜疆，拉丁语）
  1069: "eu-ES", //巴斯克语（巴斯克地区）
  1071: "mk-MK", //马其顿语（马其顿，FYROM）
  1078: "af-ZA", //南非荷兰语（南非）
  1079: "ka-GE", //格鲁吉亚语（格鲁吉亚）
  1080: "fo-FO", //法罗语（法罗群岛）
  1081: "hi-IN", //印地语（印度）
  1086: "ms-MY", //马来语（马来西亚）
  1087: "kk-KZ", //哈萨克语（哈萨克斯坦）
  1088: "ky-KG", //吉尔吉斯语（吉尔吉斯坦）
  1089: "sw-KE", //斯瓦希里语（肯尼亚）
  1091: "uz-Latn-UZ", //乌兹别克语（乌兹别克斯坦，拉丁语）
  1092: "tt-RU", //鞑靼语（俄罗斯）
  1094: "pa-IN", //旁遮普语（印度）
  1095: "gu-IN", //古吉拉特语（印度）
  1097: "ta-IN", //泰米尔语（印度）
  1098: "te-IN", //泰卢固语（印度）
  1099: "kn-IN", //卡纳达语（印度）
  1102: "mr-IN", //马拉地语（印度）
  1103: "sa-IN", //梵语（印度）
  1104: "mn-MN", //蒙古语（蒙古）
  1110: "gl-ES", //加利西亚语（西班牙）
  1111: "kok-IN", //贡根语（印度）
  1114: "syr-SY", //叙利亚语（叙利亚）
  1125: "dv-MV", //迪维希语（马尔代夫）
  2049: "ar-IQ", //阿拉伯语（伊拉克）
  2052: "简体中文", //中文（中国）
  2055: "de-CH", //德语（瑞士）
  2057: "en-GB", //英语（英国）
  2058: "Español(Latinoamerica)", //西班牙语（墨西哥）
  2060: "fr-BE", //法语（比利时）
  2064: "it-CH", //意大利语（瑞士）
  2067: "nl-BE", //荷兰语（比利时）
  2068: "nn-NO", //挪威语（尼诺斯克，挪威）
  2070: "Português(Portugal)", //葡萄牙语（葡萄牙）
  2074: "sr-Latn-CS", //塞尔维亚语（塞尔维亚，拉丁语）
  2077: "sv-FI", //瑞典语（芬兰）
  2092: "az-Cyrl-AZ", //阿泽里语（阿塞拜疆，西里尔语）
  2110: "ms-BN", //马来语（文莱达鲁萨兰）
  2115: "uz-Cyrl-UZ", //乌兹别克语（乌兹别克斯坦，西里尔语）
  3073: "ar-EG", //阿拉伯语（埃及）
  3076: "繁体中文", //中文（香港特别行政区，中国）
  3079: "de-AT", //德语（奥地利）
  3081: "en-AU", //英语（澳大利亚）
  3082: "Español(España)", //西班牙语（西班牙）
  3084: "fr-CA", //法语（加拿大）
  3098: "sr-Cyrl-CS", //塞尔维亚语（塞尔维亚，西里尔语）
  4097: "ar-LY", //阿拉伯语（利比亚）
  4100: "zh-SG", //中文（新加坡）
  4103: "de-LU", //德语（卢森堡）
  4105: "en-CA", //英语（加拿大）
  4106: "es-GT", //西班牙语（危地马拉）
  4108: "fr-CH", //法语（瑞士）
  5121: "ar-DZ", //阿拉伯语（阿尔及利亚）
  5124: "zh-MO", //中文（澳门特别行政区）
  5127: "de-LI", //德语（列支敦士登）
  5129: "en-NZ", //英语（新西兰）
  5130: "es-CR", //西班牙语（哥斯达黎加）
  5132: "fr-LU", //法语（卢森堡）
  6145: "ar-MA", //阿拉伯语（摩洛哥）
  6153: "en-IE", //英语（爱尔兰）
  6154: "es-PA", //西班牙语（巴拿马）
  6156: "fr-MC", //法语（摩纳哥）
  7169: "ar-TN", //阿拉伯语（突尼斯）
  7177: "en-ZA", //英语（南非）
  7178: "es-DO", //西班牙语（多米尼加共和国）
  8193: "ar-OM", //阿拉伯语（阿曼）
  8201: "en-JM", //英语（牙买加）
  8202: "es-VE", //西班牙语（委内瑞拉）
  9217: "ar-YE", //阿拉伯语（也门）
  9225: "en-029", //英语（加勒比）
  9226: "es-CO", //西班牙语（哥伦比亚）
  10241: "ar-SY", //阿拉伯语（叙利亚）
  10249: "en-BZ", //英语（伯利兹）
  10250: "es-PE", //西班牙（秘鲁）
  11265: "ar-JO", //阿拉伯语（约旦）
  11273: "en-TT", //英语（特立尼达和多巴哥）
  11274: "es-AR", //西班牙语（阿根廷）
  12289: "ar-LB", //阿拉伯语（黎巴嫩）
  12297: "en-ZW", //英语（津巴布韦）
  12298: "es-EC", //西班牙语（厄瓜多尔）
  13313: "ar-KW", //阿拉伯语（科威特）
  13321: "en-PH", //英语（菲律宾）
  13322: "es-CL", //西班牙语（智利）
  14337: "ar-AE", //阿拉伯语（阿联酋）
  14346: "es-UY", //西班牙语（乌拉圭）
  15361: "ar-BH", //阿拉伯语（巴林）
  15370: "es-PY", //西班牙语（巴拉圭）
  16385: "ar-QA", //阿拉伯语（卡塔尔）
  16394: "es-BO", //西班牙语（玻利维亚）
  17418: "es-SV", //西班牙语（萨尔瓦多）
  18442: "es-HN", //西班牙语（洪都拉斯）
  19466: "es-NI", //西班牙语（尼加拉瓜）
  20490: "es-PR", //西班牙语（波多黎各）
  31748: "zh-Hant" //中文（繁体）
};

const deFaultPackage = {
  1033: "English", //英语（美国）
  2052: "简体中文", //中文（中国）
  1036: "Français", //法语（法国）
  1049: "русский", //俄语 （俄罗斯）
  3082: "Español(España)", //西班牙语 （西班牙）
  2058: "Español(Latinoamerica)", //西班牙语（墨西哥）
  2070: "Português(Portugal)", //葡萄牙语 （葡萄牙）
  1046: "Português(Brasil)",  //葡萄牙语（巴西）
  3076: "繁体中文", //中文（香港特别行政区，中国）
  1055: "Türk dili", //土耳其语（土耳其）
  1040: "Italiana", //意大利语（意大利）
  1054: "ไทย" //泰语（泰国）
};
