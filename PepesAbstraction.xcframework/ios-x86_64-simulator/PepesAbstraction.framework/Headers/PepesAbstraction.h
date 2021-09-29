#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PepesAbstractionModelCategoryInbox, PepesAbstractionKotlinUnit, PepesAbstractionModelInbox, PepesAbstractionModelRequestCategoryInboxStatus, PepesAbstractionModelRequestInboxCollectionStatus, PepesAbstractionModelLanguage, PepesAbstractionKotlinThrowable, PepesAbstractionKotlinArray<T>, PepesAbstractionKotlinException, PepesAbstractionKotlinRuntimeException, PepesAbstractionKotlinIllegalStateException, PepesAbstractionModelInboxStatus, PepesAbstractionKotlinEnumCompanion, PepesAbstractionKotlinEnum<E>, PepesAbstractionModelInboxStatusCompanion;

@protocol PepesAbstractionKotlinx_coroutines_coreFlow, PepesAbstractionKotlinx_coroutines_coreFlowCollector, PepesAbstractionKotlinIterator, PepesAbstractionKotlinComparable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PepesAbstractionBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PepesAbstractionBase (PepesAbstractionBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PepesAbstractionMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PepesAbstractionMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPepesAbstractionKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PepesAbstractionNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface PepesAbstractionByte : PepesAbstractionNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PepesAbstractionUByte : PepesAbstractionNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PepesAbstractionShort : PepesAbstractionNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PepesAbstractionUShort : PepesAbstractionNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PepesAbstractionInt : PepesAbstractionNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PepesAbstractionUInt : PepesAbstractionNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PepesAbstractionLong : PepesAbstractionNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PepesAbstractionULong : PepesAbstractionNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PepesAbstractionFloat : PepesAbstractionNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PepesAbstractionDouble : PepesAbstractionNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PepesAbstractionBoolean : PepesAbstractionNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Haloo")))
@interface PepesAbstractionHaloo : PepesAbstractionBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface PepesAbstractionPlatform : PepesAbstractionBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("InboxLocalDataSource")))
@protocol PepesAbstractionInboxLocalDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)cacheCategoryInboxCollectionData:(NSArray<PepesAbstractionModelCategoryInbox *> *)data completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cacheCategoryInboxCollection(data:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)cacheListInboxCollectionPage:(int32_t)page data:(NSArray<PepesAbstractionModelInbox *> *)data idCategory:(int32_t)idCategory completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cacheListInboxCollection(page:data:idCategory:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearInboxCollectionWithCompletionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clearInboxCollection(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCategoryInboxWithCompletionHandler:(void (^)(PepesAbstractionModelRequestCategoryInboxStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCategoryInbox(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListInboxIdCategory:(int32_t)idCategory page:(int32_t)page completionHandler:(void (^)(PepesAbstractionModelRequestInboxCollectionStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListInbox(idCategory:page:completionHandler:)")));
@end;

__attribute__((swift_name("InboxRemoteDataSource")))
@protocol PepesAbstractionInboxRemoteDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchCategoryInboxMsisdn:(NSString *)msisdn language:(PepesAbstractionModelLanguage *)language completionHandler:(void (^)(PepesAbstractionModelRequestCategoryInboxStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchCategoryInbox(msisdn:language:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchListInboxMsisdn:(NSString *)msisdn idCategory:(int32_t)idCategory page:(int32_t)page limit:(int32_t)limit completionHandler:(void (^)(PepesAbstractionModelRequestInboxCollectionStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchListInbox(msisdn:idCategory:page:limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)markReadAllInboxMsisdn:(NSString *)msisdn param:(int32_t)param completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("markReadAllInbox(msisdn:param:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)markReadInboxInbox:(PepesAbstractionModelInbox *)inbox completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("markReadInbox(inbox:completionHandler:)")));
@end;

__attribute__((swift_name("InboxRepository")))
@protocol PepesAbstractionInboxRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearInboxCollectionWithCompletionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clearInboxCollection(completionHandler:)")));
- (PepesAbstractionModelInbox *)parseInboxParam:(NSString *)param __attribute__((swift_name("parseInbox(param:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestCategoryInboxMsisdn:(NSString *)msisdn language:(PepesAbstractionModelLanguage *)language completionHandler:(void (^)(id<PepesAbstractionKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestCategoryInbox(msisdn:language:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestListInboxMsisdn:(NSString *)msisdn idCategory:(int32_t)idCategory page:(int32_t)page limit:(int32_t)limit completionHandler:(void (^)(id<PepesAbstractionKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestListInbox(msisdn:idCategory:page:limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestMarkReadAllInboxMsisdn:(NSString *)msisdn param:(int32_t)param completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestMarkReadAllInbox(msisdn:param:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestMarkReadInboxInbox:(PepesAbstractionModelInbox *)inbox completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestMarkReadInbox(inbox:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface PepesAbstractionKotlinThrowable : PepesAbstractionBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (PepesAbstractionKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PepesAbstractionKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface PepesAbstractionKotlinException : PepesAbstractionKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface PepesAbstractionKotlinRuntimeException : PepesAbstractionKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PepesAbstractionKotlinIllegalStateException : PepesAbstractionKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface PepesAbstractionKotlinCancellationException : PepesAbstractionKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PepesAbstractionKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelCategoryInbox")))
@interface PepesAbstractionModelCategoryInbox : PepesAbstractionBase
- (instancetype)initWithIdCategory:(int32_t)idCategory categoryName:(NSString *)categoryName countUnread:(int32_t)countUnread __attribute__((swift_name("init(idCategory:categoryName:countUnread:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (PepesAbstractionModelCategoryInbox *)doCopyIdCategory:(int32_t)idCategory categoryName:(NSString *)categoryName countUnread:(int32_t)countUnread __attribute__((swift_name("doCopy(idCategory:categoryName:countUnread:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *categoryName __attribute__((swift_name("categoryName")));
@property int32_t countUnread __attribute__((swift_name("countUnread")));
@property (readonly) int32_t idCategory __attribute__((swift_name("idCategory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PepesAbstractionKotlinUnit : PepesAbstractionBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesAbstractionKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("ModelInbox")))
@interface PepesAbstractionModelInbox : PepesAbstractionBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) PepesAbstractionModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((swift_name("ModelRequestCategoryInboxStatus")))
@interface PepesAbstractionModelRequestCategoryInboxStatus : PepesAbstractionBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<PepesAbstractionModelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("ModelRequestInboxCollectionStatus")))
@interface PepesAbstractionModelRequestInboxCollectionStatus : PepesAbstractionBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("ModelLanguage")))
@interface PepesAbstractionModelLanguage : PepesAbstractionBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol PepesAbstractionKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PepesAbstractionKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PepesAbstractionKotlinArray<T> : PepesAbstractionBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PepesAbstractionInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PepesAbstractionKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol PepesAbstractionKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface PepesAbstractionKotlinEnum<E> : PepesAbstractionBase <PepesAbstractionKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PepesAbstractionKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelInbox.Status")))
@interface PepesAbstractionModelInboxStatus : PepesAbstractionKotlinEnum<PepesAbstractionModelInboxStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PepesAbstractionModelInboxStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PepesAbstractionModelInboxStatus *unread __attribute__((swift_name("unread")));
@property (class, readonly) PepesAbstractionModelInboxStatus *read __attribute__((swift_name("read")));
+ (PepesAbstractionKotlinArray<PepesAbstractionModelInboxStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol PepesAbstractionKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(PepesAbstractionKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PepesAbstractionKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PepesAbstractionKotlinEnumCompanion : PepesAbstractionBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesAbstractionKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelInbox.StatusCompanion")))
@interface PepesAbstractionModelInboxStatusCompanion : PepesAbstractionBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesAbstractionModelInboxStatusCompanion *shared __attribute__((swift_name("shared")));
- (PepesAbstractionModelInboxStatus *)getParam:(NSString * _Nullable)param __attribute__((swift_name("get(param:)")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
