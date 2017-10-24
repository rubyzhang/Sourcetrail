#ifndef QT_PROJECT_WIZZARD_CONTENT_GROUP_H
#define QT_PROJECT_WIZZARD_CONTENT_GROUP_H

#include "qt/window/project_wizzard/QtProjectWizzardContent.h"

class QCheckBox;

class QtProjectWizzardContentGroup
	: public QtProjectWizzardContent
{
	Q_OBJECT

public:
	QtProjectWizzardContentGroup(QtProjectWizzardWindow* window);

	void addContent(QtProjectWizzardContent* content);
	void addSpace();

	void setIsForm(bool isForm);

protected:
	// QtProjectWizzardContent implementation
	virtual void populate(QGridLayout* layout, int& row) override;
	void populateForm(QGridLayout* layout, int& row);

	virtual void load() override;
	virtual void save() override;
	virtual bool check() override;

	virtual bool isScrollAble() const override;

private:
	std::vector<QtProjectWizzardContent*> m_contents;
	bool m_isForm;
};

#endif // QT_PROJECT_WIZZARD_CONTENT_GROUP_H