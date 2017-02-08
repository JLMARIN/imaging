import ConfigParser


def ConfigSectionMap(section):
    dict1 = {}
    options = Config.options(section)
    for option in options:
        try:
            dict1[option] = Config.get(section, option)
            if dict1[option] == -1:
                print "skip: %s" % option
        except:
            print "exception on %s!" % option
            dict1[option] = None
    return dict1


if __name__ == '__main__':

    print "Testing ConfigParser..."

    Config = ConfigParser.ConfigParser()
    Config.read("config_test.ini")

    print "Sections:"
    print Config.sections()

    Name = ConfigSectionMap("SectionOne")['name']
    Age = ConfigSectionMap("SectionOne")['age']
    Color = ConfigSectionMap("SectionTwo")['favoritecolor']

    print "Hello %s. You are %s years old." % (Name, Age)
    print "Your favorite color is %s." % Color
