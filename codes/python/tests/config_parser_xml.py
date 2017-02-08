import xml.etree.ElementTree as ET

if __name__ == '__main__':

    print "Testing ConfigParserXML..."

    tree = ET.parse("config_test.xml")
    config = tree.getroot()

    Name = config.find('section1/name')
    Age = config.find('section1/age')
    Color = config.find('section2/color')

    print "Hello %s. You are %s years old." % (Name.text, Age.text)
    print "Your favorite color is %s." % Color.text
