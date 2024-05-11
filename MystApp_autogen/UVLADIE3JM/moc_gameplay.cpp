/****************************************************************************
** Meta object code from reading C++ file 'gameplay.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Myst/src/gameplay.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGamePlayENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGamePlayENDCLASS = QtMocHelpers::stringData(
    "GamePlay",
    "myHandChanged",
    "",
    "enemyHandChanged",
    "myHasPassedChanged",
    "enemyHasPassedChanged",
    "isMyTurnChanged",
    "isGameStartedChanged",
    "myScoreChanged",
    "enemyScoreChanged",
    "roundWinnersChanged",
    "enemyCardPlayed",
    "isAceSpadesActiveChanged",
    "isAceDiamondsActiveChanged",
    "isAceClubsActiveChanged",
    "startNewGame",
    "playMyCard",
    "playEnemyCard",
    "exitGame",
    "myHand",
    "enemyHand",
    "myHasPassed",
    "enemyHasPassed",
    "isMyTurn",
    "isGameStarted",
    "myScore",
    "enemyScore",
    "roundWinners",
    "enemyCard",
    "isAceSpadesActive",
    "isAceDiamondsActive",
    "isAceClubsActive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGamePlayENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      13,  135, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,   14 /* Public */,
       3,    0,  117,    2, 0x06,   15 /* Public */,
       4,    0,  118,    2, 0x06,   16 /* Public */,
       5,    0,  119,    2, 0x06,   17 /* Public */,
       6,    0,  120,    2, 0x06,   18 /* Public */,
       7,    0,  121,    2, 0x06,   19 /* Public */,
       8,    0,  122,    2, 0x06,   20 /* Public */,
       9,    0,  123,    2, 0x06,   21 /* Public */,
      10,    0,  124,    2, 0x06,   22 /* Public */,
      11,    0,  125,    2, 0x06,   23 /* Public */,
      12,    0,  126,    2, 0x06,   24 /* Public */,
      13,    0,  127,    2, 0x06,   25 /* Public */,
      14,    0,  128,    2, 0x06,   26 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  129,    2, 0x0a,   27 /* Public */,
      16,    1,  130,    2, 0x0a,   28 /* Public */,
      17,    0,  133,    2, 0x0a,   30 /* Public */,
      18,    0,  134,    2, 0x0a,   31 /* Public */,

 // signals: parameters
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::QStringList, 0x00015801, uint(0), 0,
      20, QMetaType::QStringList, 0x00015801, uint(1), 0,
      21, QMetaType::Bool, 0x00015801, uint(2), 0,
      22, QMetaType::Bool, 0x00015801, uint(3), 0,
      23, QMetaType::Bool, 0x00015801, uint(4), 0,
      24, QMetaType::Bool, 0x00015801, uint(5), 0,
      25, QMetaType::Int, 0x00015801, uint(6), 0,
      26, QMetaType::Int, 0x00015801, uint(7), 0,
      27, QMetaType::QString, 0x00015801, uint(8), 0,
      28, QMetaType::QString, 0x00015801, uint(9), 0,
      29, QMetaType::Bool, 0x00015801, uint(10), 0,
      30, QMetaType::Bool, 0x00015801, uint(11), 0,
      31, QMetaType::Bool, 0x00015801, uint(12), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject GamePlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGamePlayENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGamePlayENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGamePlayENDCLASS_t,
        // property 'myHand'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>,
        // property 'enemyHand'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>,
        // property 'myHasPassed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enemyHasPassed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isMyTurn'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isGameStarted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'myScore'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'enemyScore'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'roundWinners'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'enemyCard'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isAceSpadesActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isAceDiamondsActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isAceClubsActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GamePlay, std::true_type>,
        // method 'myHandChanged'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::false_type>,
        // method 'enemyHandChanged'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::false_type>,
        // method 'myHasPassedChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'enemyHasPassedChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isMyTurnChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isGameStartedChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'myScoreChanged'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'enemyScoreChanged'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'roundWinnersChanged'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'enemyCardPlayed'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'isAceSpadesActiveChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isAceDiamondsActiveChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isAceClubsActiveChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startNewGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playMyCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'playEnemyCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exitGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GamePlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamePlay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QString> _r = _t->myHandChanged();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<QString> _r = _t->enemyHandChanged();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->myHasPassedChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->enemyHasPassedChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isMyTurnChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->isGameStartedChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->myScoreChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->enemyScoreChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->roundWinnersChanged();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->enemyCardPlayed();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isAceSpadesActiveChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isAceDiamondsActiveChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isAceClubsActiveChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->startNewGame(); break;
        case 14: _t->playMyCard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->playEnemyCard(); break;
        case 16: _t->exitGame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = QList<QString> (GamePlay::*)();
            if (_t _q_method = &GamePlay::myHandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = QList<QString> (GamePlay::*)();
            if (_t _q_method = &GamePlay::enemyHandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::myHasPassedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::enemyHasPassedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::isMyTurnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::isGameStartedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = int (GamePlay::*)();
            if (_t _q_method = &GamePlay::myScoreChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = int (GamePlay::*)();
            if (_t _q_method = &GamePlay::enemyScoreChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = QString (GamePlay::*)();
            if (_t _q_method = &GamePlay::roundWinnersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = QString (GamePlay::*)();
            if (_t _q_method = &GamePlay::enemyCardPlayed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::isAceSpadesActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::isAceDiamondsActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = bool (GamePlay::*)();
            if (_t _q_method = &GamePlay::isAceClubsActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GamePlay *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QString>*>(_v) = _t->myHand(); break;
        case 1: *reinterpret_cast< QList<QString>*>(_v) = _t->enemyHand(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->myHasPassed(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enemyHasPassed(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMyTurn(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isGameStarted(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->myScore(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->enemyScore(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->roundWinners(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->enemyCard(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isAceSpadesActive(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isAceDiamondsActive(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isAceClubsActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *GamePlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGamePlayENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GamePlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
QList<QString> GamePlay::myHandChanged()
{
    QList<QString> _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
QList<QString> GamePlay::enemyHandChanged()
{
    QList<QString> _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
bool GamePlay::myHasPassedChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool GamePlay::enemyHasPassedChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
bool GamePlay::isMyTurnChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
bool GamePlay::isGameStartedChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
int GamePlay::myScoreChanged()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
int GamePlay::enemyScoreChanged()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
QString GamePlay::roundWinnersChanged()
{
    QString _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}

// SIGNAL 9
QString GamePlay::enemyCardPlayed()
{
    QString _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
    return _t0;
}

// SIGNAL 10
bool GamePlay::isAceSpadesActiveChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
    return _t0;
}

// SIGNAL 11
bool GamePlay::isAceDiamondsActiveChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
    return _t0;
}

// SIGNAL 12
bool GamePlay::isAceClubsActiveChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
    return _t0;
}
QT_WARNING_POP
