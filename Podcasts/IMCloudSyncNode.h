/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMCloudSyncTransaction, NSString, NSData, NSNumber, NSDate, NSArray, NSDictionary;

@interface IMCloudSyncNode : NSObject {

	IMCloudSyncTransaction* _transaction;
	NSString* _key;
	NSString* _version;
	NSData* _value;
	BOOL _mismatch;
	NSString* _wrapperRevision;
	NSString* _name;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) NSString * wrapperRevision;                        //@synthesize wrapperRevision=_wrapperRevision - In the implementation block
@property (assign,nonatomic) BOOL mismatch;                                     //@synthesize mismatch=_mismatch - In the implementation block
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSNumber * numberValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSData * dataValue; 
@property (nonatomic,retain) NSArray * arrayValue; 
@property (nonatomic,retain) NSDictionary * dictionaryValue; 
@property (nonatomic,retain) id objectValue; 
+(id)serverRevisionNewerThanClientKeys;
+(BOOL)isServerRevisionNewerThanClient:(id)arg1 ;
+(id)keyWithPrefix:(id)arg1 assetID:(id)arg2 ;
+(void)setServerRevisionNewerThanClient:(id)arg1 ;
+(id)keysWithPrefix:(id)arg1 assetIDs:(id)arg2 ;
+(id)assetIDForKey:(id)arg1 withPrefix:(id)arg2 ;
+(id)cloudDataCurrentRevision;
+(id)cloudDataMaxRevision;
-(id)objectValueMatchingClass:(Class)arg1 ;
-(NSString *)wrapperRevision;
-(NSArray *)arrayValue;
-(void)setArrayValue:(NSArray *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)setDictionaryValue:(NSDictionary *)arg1 ;
-(BOOL)mismatch;
-(void)setMismatch:(BOOL)arg1 ;
-(void)setWrapperRevision:(NSString *)arg1 ;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setValue:(NSData *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)value;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(BOOL)hasData;
-(NSData *)dataValue;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(NSNumber *)numberValue;
@end

