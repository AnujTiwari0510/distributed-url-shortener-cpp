#ifndef URL_H
#define URL_H

#include <string>

class Url
{
private:
    long long id;
    std::string longUrl;
    std::string shortCode;
    int clickCount;

public:
    Url();

    Url(long long id,
        const std::string& longUrl,
        const std::string& shortCode);

    long long getId() const;

    std::string getLongUrl() const;

    std::string getShortCode() const;

    int getClickCount() const;

    void incrementClicks();
};

#endif
