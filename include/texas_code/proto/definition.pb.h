// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: definition.proto

#ifndef PROTOBUF_definition_2eproto__INCLUDED
#define PROTOBUF_definition_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace texas_code {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_definition_2eproto();
void protobuf_AssignDesc_definition_2eproto();
void protobuf_ShutdownFile_definition_2eproto();

class Card;
class JettonAction;
class Player;
class PlayerAction;
class PlayerHandInfo;

enum Color {
  DIAMONDS = 0,
  CLUBS = 1,
  HEARTS = 2,
  SPADES = 3,
  Color_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Color_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Color_IsValid(int value);
const Color Color_MIN = DIAMONDS;
const Color Color_MAX = SPADES;
const int Color_ARRAYSIZE = Color_MAX + 1;

const ::google::protobuf::EnumDescriptor* Color_descriptor();
inline const ::std::string& Color_Name(Color value) {
  return ::google::protobuf::internal::NameOfEnum(
    Color_descriptor(), value);
}
inline bool Color_Parse(
    const ::std::string& name, Color* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Color>(
    Color_descriptor(), name, value);
}
enum Brand {
  HIGH_CARD = 0,
  ONE_PAIR = 1,
  TWO_PAIR = 2,
  THREE_OF_A_KIND = 3,
  STRAIGHT = 4,
  FLUSH = 5,
  FULL_HOUSE = 6,
  FOUR_OF_A_KIND = 7,
  STRAIGHT_FLUSH = 8,
  ROYAL_STRAIGHT_FLUSH = 9,
  Brand_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Brand_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Brand_IsValid(int value);
const Brand Brand_MIN = HIGH_CARD;
const Brand Brand_MAX = ROYAL_STRAIGHT_FLUSH;
const int Brand_ARRAYSIZE = Brand_MAX + 1;

const ::google::protobuf::EnumDescriptor* Brand_descriptor();
inline const ::std::string& Brand_Name(Brand value) {
  return ::google::protobuf::internal::NameOfEnum(
    Brand_descriptor(), value);
}
inline bool Brand_Parse(
    const ::std::string& name, Brand* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Brand>(
    Brand_descriptor(), name, value);
}
enum Action {
  BET = 0,
  CALL = 1,
  FOLD = 2,
  CHECK = 3,
  RAISE = 4,
  RE_RAISE = 5,
  ALL_IN = 6,
  Action_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Action_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Action_IsValid(int value);
const Action Action_MIN = BET;
const Action Action_MAX = ALL_IN;
const int Action_ARRAYSIZE = Action_MAX + 1;

const ::google::protobuf::EnumDescriptor* Action_descriptor();
inline const ::std::string& Action_Name(Action value) {
  return ::google::protobuf::internal::NameOfEnum(
    Action_descriptor(), value);
}
inline bool Action_Parse(
    const ::std::string& name, Action* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Action>(
    Action_descriptor(), name, value);
}
enum Status {
  PREFLOP = 0,
  FLOP = 1,
  TURN = 2,
  RIVER = 3,
  SHOWN_DOWN = 4,
  Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Status_IsValid(int value);
const Status Status_MIN = PREFLOP;
const Status Status_MAX = SHOWN_DOWN;
const int Status_ARRAYSIZE = Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* Status_descriptor();
inline const ::std::string& Status_Name(Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    Status_descriptor(), value);
}
inline bool Status_Parse(
    const ::std::string& name, Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Status>(
    Status_descriptor(), name, value);
}
// ===================================================================

class Card : public ::google::protobuf::Message {
 public:
  Card();
  virtual ~Card();

  Card(const Card& from);

  inline Card& operator=(const Card& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Card& default_instance();

  void Swap(Card* other);

  // implements Message ----------------------------------------------

  inline Card* New() const { return New(NULL); }

  Card* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Card& from);
  void MergeFrom(const Card& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Card* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .texas_code.proto.Color color = 1;
  void clear_color();
  static const int kColorFieldNumber = 1;
  ::texas_code::proto::Color color() const;
  void set_color(::texas_code::proto::Color value);

  // optional int32 point = 2;
  void clear_point();
  static const int kPointFieldNumber = 2;
  ::google::protobuf::int32 point() const;
  void set_point(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:texas_code.proto.Card)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int color_;
  ::google::protobuf::int32 point_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_definition_2eproto();
  friend void protobuf_AssignDesc_definition_2eproto();
  friend void protobuf_ShutdownFile_definition_2eproto();

  void InitAsDefaultInstance();
  static Card* default_instance_;
};
// -------------------------------------------------------------------

class Player : public ::google::protobuf::Message {
 public:
  Player();
  virtual ~Player();

  Player(const Player& from);

  inline Player& operator=(const Player& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Player& default_instance();

  void Swap(Player* other);

  // implements Message ----------------------------------------------

  inline Player* New() const { return New(NULL); }

  Player* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Player& from);
  void MergeFrom(const Player& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Player* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional int64 cash = 2;
  void clear_cash();
  static const int kCashFieldNumber = 2;
  ::google::protobuf::int64 cash() const;
  void set_cash(::google::protobuf::int64 value);

  // optional int64 jetton = 3;
  void clear_jetton();
  static const int kJettonFieldNumber = 3;
  ::google::protobuf::int64 jetton() const;
  void set_jetton(::google::protobuf::int64 value);

  // optional int64 bet = 4;
  void clear_bet();
  static const int kBetFieldNumber = 4;
  ::google::protobuf::int64 bet() const;
  void set_bet(::google::protobuf::int64 value);

  // optional int32 position = 5;
  void clear_position();
  static const int kPositionFieldNumber = 5;
  ::google::protobuf::int32 position() const;
  void set_position(::google::protobuf::int32 value);

  // optional string account_name = 6;
  void clear_account_name();
  static const int kAccountNameFieldNumber = 6;
  const ::std::string& account_name() const;
  void set_account_name(const ::std::string& value);
  void set_account_name(const char* value);
  void set_account_name(const char* value, size_t size);
  ::std::string* mutable_account_name();
  ::std::string* release_account_name();
  void set_allocated_account_name(::std::string* account_name);

  // @@protoc_insertion_point(class_scope:texas_code.proto.Player)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 cash_;
  ::google::protobuf::int64 jetton_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 position_;
  ::google::protobuf::int64 bet_;
  ::google::protobuf::internal::ArenaStringPtr account_name_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_definition_2eproto();
  friend void protobuf_AssignDesc_definition_2eproto();
  friend void protobuf_ShutdownFile_definition_2eproto();

  void InitAsDefaultInstance();
  static Player* default_instance_;
};
// -------------------------------------------------------------------

class JettonAction : public ::google::protobuf::Message {
 public:
  JettonAction();
  virtual ~JettonAction();

  JettonAction(const JettonAction& from);

  inline JettonAction& operator=(const JettonAction& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const JettonAction& default_instance();

  void Swap(JettonAction* other);

  // implements Message ----------------------------------------------

  inline JettonAction* New() const { return New(NULL); }

  JettonAction* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JettonAction& from);
  void MergeFrom(const JettonAction& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(JettonAction* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .texas_code.proto.Action action = 1;
  void clear_action();
  static const int kActionFieldNumber = 1;
  ::texas_code::proto::Action action() const;
  void set_action(::texas_code::proto::Action value);

  // optional int64 action_jetton = 2;
  void clear_action_jetton();
  static const int kActionJettonFieldNumber = 2;
  ::google::protobuf::int64 action_jetton() const;
  void set_action_jetton(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:texas_code.proto.JettonAction)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 action_jetton_;
  int action_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_definition_2eproto();
  friend void protobuf_AssignDesc_definition_2eproto();
  friend void protobuf_ShutdownFile_definition_2eproto();

  void InitAsDefaultInstance();
  static JettonAction* default_instance_;
};
// -------------------------------------------------------------------

class PlayerAction : public ::google::protobuf::Message {
 public:
  PlayerAction();
  virtual ~PlayerAction();

  PlayerAction(const PlayerAction& from);

  inline PlayerAction& operator=(const PlayerAction& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerAction& default_instance();

  void Swap(PlayerAction* other);

  // implements Message ----------------------------------------------

  inline PlayerAction* New() const { return New(NULL); }

  PlayerAction* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerAction& from);
  void MergeFrom(const PlayerAction& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PlayerAction* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .texas_code.proto.Player player = 1;
  bool has_player() const;
  void clear_player();
  static const int kPlayerFieldNumber = 1;
  const ::texas_code::proto::Player& player() const;
  ::texas_code::proto::Player* mutable_player();
  ::texas_code::proto::Player* release_player();
  void set_allocated_player(::texas_code::proto::Player* player);

  // optional .texas_code.proto.JettonAction action = 2;
  bool has_action() const;
  void clear_action();
  static const int kActionFieldNumber = 2;
  const ::texas_code::proto::JettonAction& action() const;
  ::texas_code::proto::JettonAction* mutable_action();
  ::texas_code::proto::JettonAction* release_action();
  void set_allocated_action(::texas_code::proto::JettonAction* action);

  // @@protoc_insertion_point(class_scope:texas_code.proto.PlayerAction)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::texas_code::proto::Player* player_;
  ::texas_code::proto::JettonAction* action_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_definition_2eproto();
  friend void protobuf_AssignDesc_definition_2eproto();
  friend void protobuf_ShutdownFile_definition_2eproto();

  void InitAsDefaultInstance();
  static PlayerAction* default_instance_;
};
// -------------------------------------------------------------------

class PlayerHandInfo : public ::google::protobuf::Message {
 public:
  PlayerHandInfo();
  virtual ~PlayerHandInfo();

  PlayerHandInfo(const PlayerHandInfo& from);

  inline PlayerHandInfo& operator=(const PlayerHandInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerHandInfo& default_instance();

  void Swap(PlayerHandInfo* other);

  // implements Message ----------------------------------------------

  inline PlayerHandInfo* New() const { return New(NULL); }

  PlayerHandInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerHandInfo& from);
  void MergeFrom(const PlayerHandInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PlayerHandInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .texas_code.proto.Player player = 1;
  bool has_player() const;
  void clear_player();
  static const int kPlayerFieldNumber = 1;
  const ::texas_code::proto::Player& player() const;
  ::texas_code::proto::Player* mutable_player();
  ::texas_code::proto::Player* release_player();
  void set_allocated_player(::texas_code::proto::Player* player);

  // optional .texas_code.proto.Card card_1 = 2;
  bool has_card_1() const;
  void clear_card_1();
  static const int kCard1FieldNumber = 2;
  const ::texas_code::proto::Card& card_1() const;
  ::texas_code::proto::Card* mutable_card_1();
  ::texas_code::proto::Card* release_card_1();
  void set_allocated_card_1(::texas_code::proto::Card* card_1);

  // optional .texas_code.proto.Card card_2 = 3;
  bool has_card_2() const;
  void clear_card_2();
  static const int kCard2FieldNumber = 3;
  const ::texas_code::proto::Card& card_2() const;
  ::texas_code::proto::Card* mutable_card_2();
  ::texas_code::proto::Card* release_card_2();
  void set_allocated_card_2(::texas_code::proto::Card* card_2);

  // optional .texas_code.proto.Brand nut_hand_brand = 4;
  void clear_nut_hand_brand();
  static const int kNutHandBrandFieldNumber = 4;
  ::texas_code::proto::Brand nut_hand_brand() const;
  void set_nut_hand_brand(::texas_code::proto::Brand value);

  // repeated .texas_code.proto.Card nut_hand = 5;
  int nut_hand_size() const;
  void clear_nut_hand();
  static const int kNutHandFieldNumber = 5;
  const ::texas_code::proto::Card& nut_hand(int index) const;
  ::texas_code::proto::Card* mutable_nut_hand(int index);
  ::texas_code::proto::Card* add_nut_hand();
  ::google::protobuf::RepeatedPtrField< ::texas_code::proto::Card >*
      mutable_nut_hand();
  const ::google::protobuf::RepeatedPtrField< ::texas_code::proto::Card >&
      nut_hand() const;

  // @@protoc_insertion_point(class_scope:texas_code.proto.PlayerHandInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::texas_code::proto::Player* player_;
  ::texas_code::proto::Card* card_1_;
  ::texas_code::proto::Card* card_2_;
  ::google::protobuf::RepeatedPtrField< ::texas_code::proto::Card > nut_hand_;
  int nut_hand_brand_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_definition_2eproto();
  friend void protobuf_AssignDesc_definition_2eproto();
  friend void protobuf_ShutdownFile_definition_2eproto();

  void InitAsDefaultInstance();
  static PlayerHandInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Card

// optional .texas_code.proto.Color color = 1;
inline void Card::clear_color() {
  color_ = 0;
}
inline ::texas_code::proto::Color Card::color() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Card.color)
  return static_cast< ::texas_code::proto::Color >(color_);
}
inline void Card::set_color(::texas_code::proto::Color value) {
  
  color_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Card.color)
}

// optional int32 point = 2;
inline void Card::clear_point() {
  point_ = 0;
}
inline ::google::protobuf::int32 Card::point() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Card.point)
  return point_;
}
inline void Card::set_point(::google::protobuf::int32 value) {
  
  point_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Card.point)
}

// -------------------------------------------------------------------

// Player

// optional int32 id = 1;
inline void Player::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Player::id() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Player.id)
  return id_;
}
inline void Player::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Player.id)
}

// optional int64 cash = 2;
inline void Player::clear_cash() {
  cash_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Player::cash() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Player.cash)
  return cash_;
}
inline void Player::set_cash(::google::protobuf::int64 value) {
  
  cash_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Player.cash)
}

// optional int64 jetton = 3;
inline void Player::clear_jetton() {
  jetton_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Player::jetton() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Player.jetton)
  return jetton_;
}
inline void Player::set_jetton(::google::protobuf::int64 value) {
  
  jetton_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Player.jetton)
}

// optional int64 bet = 4;
inline void Player::clear_bet() {
  bet_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Player::bet() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Player.bet)
  return bet_;
}
inline void Player::set_bet(::google::protobuf::int64 value) {
  
  bet_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Player.bet)
}

// optional int32 position = 5;
inline void Player::clear_position() {
  position_ = 0;
}
inline ::google::protobuf::int32 Player::position() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Player.position)
  return position_;
}
inline void Player::set_position(::google::protobuf::int32 value) {
  
  position_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.Player.position)
}

// optional string account_name = 6;
inline void Player::clear_account_name() {
  account_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Player::account_name() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.Player.account_name)
  return account_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Player::set_account_name(const ::std::string& value) {
  
  account_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:texas_code.proto.Player.account_name)
}
inline void Player::set_account_name(const char* value) {
  
  account_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:texas_code.proto.Player.account_name)
}
inline void Player::set_account_name(const char* value, size_t size) {
  
  account_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:texas_code.proto.Player.account_name)
}
inline ::std::string* Player::mutable_account_name() {
  
  // @@protoc_insertion_point(field_mutable:texas_code.proto.Player.account_name)
  return account_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Player::release_account_name() {
  
  return account_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Player::set_allocated_account_name(::std::string* account_name) {
  if (account_name != NULL) {
    
  } else {
    
  }
  account_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account_name);
  // @@protoc_insertion_point(field_set_allocated:texas_code.proto.Player.account_name)
}

// -------------------------------------------------------------------

// JettonAction

// optional .texas_code.proto.Action action = 1;
inline void JettonAction::clear_action() {
  action_ = 0;
}
inline ::texas_code::proto::Action JettonAction::action() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.JettonAction.action)
  return static_cast< ::texas_code::proto::Action >(action_);
}
inline void JettonAction::set_action(::texas_code::proto::Action value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.JettonAction.action)
}

// optional int64 action_jetton = 2;
inline void JettonAction::clear_action_jetton() {
  action_jetton_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 JettonAction::action_jetton() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.JettonAction.action_jetton)
  return action_jetton_;
}
inline void JettonAction::set_action_jetton(::google::protobuf::int64 value) {
  
  action_jetton_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.JettonAction.action_jetton)
}

// -------------------------------------------------------------------

// PlayerAction

// optional .texas_code.proto.Player player = 1;
inline bool PlayerAction::has_player() const {
  return !_is_default_instance_ && player_ != NULL;
}
inline void PlayerAction::clear_player() {
  if (GetArenaNoVirtual() == NULL && player_ != NULL) delete player_;
  player_ = NULL;
}
inline const ::texas_code::proto::Player& PlayerAction::player() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerAction.player)
  return player_ != NULL ? *player_ : *default_instance_->player_;
}
inline ::texas_code::proto::Player* PlayerAction::mutable_player() {
  
  if (player_ == NULL) {
    player_ = new ::texas_code::proto::Player;
  }
  // @@protoc_insertion_point(field_mutable:texas_code.proto.PlayerAction.player)
  return player_;
}
inline ::texas_code::proto::Player* PlayerAction::release_player() {
  
  ::texas_code::proto::Player* temp = player_;
  player_ = NULL;
  return temp;
}
inline void PlayerAction::set_allocated_player(::texas_code::proto::Player* player) {
  delete player_;
  player_ = player;
  if (player) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:texas_code.proto.PlayerAction.player)
}

// optional .texas_code.proto.JettonAction action = 2;
inline bool PlayerAction::has_action() const {
  return !_is_default_instance_ && action_ != NULL;
}
inline void PlayerAction::clear_action() {
  if (GetArenaNoVirtual() == NULL && action_ != NULL) delete action_;
  action_ = NULL;
}
inline const ::texas_code::proto::JettonAction& PlayerAction::action() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerAction.action)
  return action_ != NULL ? *action_ : *default_instance_->action_;
}
inline ::texas_code::proto::JettonAction* PlayerAction::mutable_action() {
  
  if (action_ == NULL) {
    action_ = new ::texas_code::proto::JettonAction;
  }
  // @@protoc_insertion_point(field_mutable:texas_code.proto.PlayerAction.action)
  return action_;
}
inline ::texas_code::proto::JettonAction* PlayerAction::release_action() {
  
  ::texas_code::proto::JettonAction* temp = action_;
  action_ = NULL;
  return temp;
}
inline void PlayerAction::set_allocated_action(::texas_code::proto::JettonAction* action) {
  delete action_;
  action_ = action;
  if (action) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:texas_code.proto.PlayerAction.action)
}

// -------------------------------------------------------------------

// PlayerHandInfo

// optional .texas_code.proto.Player player = 1;
inline bool PlayerHandInfo::has_player() const {
  return !_is_default_instance_ && player_ != NULL;
}
inline void PlayerHandInfo::clear_player() {
  if (GetArenaNoVirtual() == NULL && player_ != NULL) delete player_;
  player_ = NULL;
}
inline const ::texas_code::proto::Player& PlayerHandInfo::player() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerHandInfo.player)
  return player_ != NULL ? *player_ : *default_instance_->player_;
}
inline ::texas_code::proto::Player* PlayerHandInfo::mutable_player() {
  
  if (player_ == NULL) {
    player_ = new ::texas_code::proto::Player;
  }
  // @@protoc_insertion_point(field_mutable:texas_code.proto.PlayerHandInfo.player)
  return player_;
}
inline ::texas_code::proto::Player* PlayerHandInfo::release_player() {
  
  ::texas_code::proto::Player* temp = player_;
  player_ = NULL;
  return temp;
}
inline void PlayerHandInfo::set_allocated_player(::texas_code::proto::Player* player) {
  delete player_;
  player_ = player;
  if (player) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:texas_code.proto.PlayerHandInfo.player)
}

// optional .texas_code.proto.Card card_1 = 2;
inline bool PlayerHandInfo::has_card_1() const {
  return !_is_default_instance_ && card_1_ != NULL;
}
inline void PlayerHandInfo::clear_card_1() {
  if (GetArenaNoVirtual() == NULL && card_1_ != NULL) delete card_1_;
  card_1_ = NULL;
}
inline const ::texas_code::proto::Card& PlayerHandInfo::card_1() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerHandInfo.card_1)
  return card_1_ != NULL ? *card_1_ : *default_instance_->card_1_;
}
inline ::texas_code::proto::Card* PlayerHandInfo::mutable_card_1() {
  
  if (card_1_ == NULL) {
    card_1_ = new ::texas_code::proto::Card;
  }
  // @@protoc_insertion_point(field_mutable:texas_code.proto.PlayerHandInfo.card_1)
  return card_1_;
}
inline ::texas_code::proto::Card* PlayerHandInfo::release_card_1() {
  
  ::texas_code::proto::Card* temp = card_1_;
  card_1_ = NULL;
  return temp;
}
inline void PlayerHandInfo::set_allocated_card_1(::texas_code::proto::Card* card_1) {
  delete card_1_;
  card_1_ = card_1;
  if (card_1) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:texas_code.proto.PlayerHandInfo.card_1)
}

// optional .texas_code.proto.Card card_2 = 3;
inline bool PlayerHandInfo::has_card_2() const {
  return !_is_default_instance_ && card_2_ != NULL;
}
inline void PlayerHandInfo::clear_card_2() {
  if (GetArenaNoVirtual() == NULL && card_2_ != NULL) delete card_2_;
  card_2_ = NULL;
}
inline const ::texas_code::proto::Card& PlayerHandInfo::card_2() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerHandInfo.card_2)
  return card_2_ != NULL ? *card_2_ : *default_instance_->card_2_;
}
inline ::texas_code::proto::Card* PlayerHandInfo::mutable_card_2() {
  
  if (card_2_ == NULL) {
    card_2_ = new ::texas_code::proto::Card;
  }
  // @@protoc_insertion_point(field_mutable:texas_code.proto.PlayerHandInfo.card_2)
  return card_2_;
}
inline ::texas_code::proto::Card* PlayerHandInfo::release_card_2() {
  
  ::texas_code::proto::Card* temp = card_2_;
  card_2_ = NULL;
  return temp;
}
inline void PlayerHandInfo::set_allocated_card_2(::texas_code::proto::Card* card_2) {
  delete card_2_;
  card_2_ = card_2;
  if (card_2) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:texas_code.proto.PlayerHandInfo.card_2)
}

// optional .texas_code.proto.Brand nut_hand_brand = 4;
inline void PlayerHandInfo::clear_nut_hand_brand() {
  nut_hand_brand_ = 0;
}
inline ::texas_code::proto::Brand PlayerHandInfo::nut_hand_brand() const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerHandInfo.nut_hand_brand)
  return static_cast< ::texas_code::proto::Brand >(nut_hand_brand_);
}
inline void PlayerHandInfo::set_nut_hand_brand(::texas_code::proto::Brand value) {
  
  nut_hand_brand_ = value;
  // @@protoc_insertion_point(field_set:texas_code.proto.PlayerHandInfo.nut_hand_brand)
}

// repeated .texas_code.proto.Card nut_hand = 5;
inline int PlayerHandInfo::nut_hand_size() const {
  return nut_hand_.size();
}
inline void PlayerHandInfo::clear_nut_hand() {
  nut_hand_.Clear();
}
inline const ::texas_code::proto::Card& PlayerHandInfo::nut_hand(int index) const {
  // @@protoc_insertion_point(field_get:texas_code.proto.PlayerHandInfo.nut_hand)
  return nut_hand_.Get(index);
}
inline ::texas_code::proto::Card* PlayerHandInfo::mutable_nut_hand(int index) {
  // @@protoc_insertion_point(field_mutable:texas_code.proto.PlayerHandInfo.nut_hand)
  return nut_hand_.Mutable(index);
}
inline ::texas_code::proto::Card* PlayerHandInfo::add_nut_hand() {
  // @@protoc_insertion_point(field_add:texas_code.proto.PlayerHandInfo.nut_hand)
  return nut_hand_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::texas_code::proto::Card >*
PlayerHandInfo::mutable_nut_hand() {
  // @@protoc_insertion_point(field_mutable_list:texas_code.proto.PlayerHandInfo.nut_hand)
  return &nut_hand_;
}
inline const ::google::protobuf::RepeatedPtrField< ::texas_code::proto::Card >&
PlayerHandInfo::nut_hand() const {
  // @@protoc_insertion_point(field_list:texas_code.proto.PlayerHandInfo.nut_hand)
  return nut_hand_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace texas_code

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::texas_code::proto::Color> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::texas_code::proto::Color>() {
  return ::texas_code::proto::Color_descriptor();
}
template <> struct is_proto_enum< ::texas_code::proto::Brand> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::texas_code::proto::Brand>() {
  return ::texas_code::proto::Brand_descriptor();
}
template <> struct is_proto_enum< ::texas_code::proto::Action> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::texas_code::proto::Action>() {
  return ::texas_code::proto::Action_descriptor();
}
template <> struct is_proto_enum< ::texas_code::proto::Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::texas_code::proto::Status>() {
  return ::texas_code::proto::Status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_definition_2eproto__INCLUDED
