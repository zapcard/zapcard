// Copyright (c) 2011-2014 The Zapcard developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINADDRESSVALIDATOR_H
#define BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ZapcardAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ZapcardAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Zapcard address widget validator, checks for a valid zapcard address.
 */
class ZapcardAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ZapcardAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOINADDRESSVALIDATOR_H
