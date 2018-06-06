/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:30:51 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Tips/Tips-Structs.h>
@class NSObject, NSString, NSDictionary, NSDateFormatter, NSURL;

@interface TPSAppDefines : NSObject {

	BOOL _logEverything;
	NSObject*<OS_dispatch_queue> _logQueue;
	asl_object_sRef _aslClient;
	long long _logLevel;
	NSString* _noticeLabel;
	NSDictionary* _appIdentifierMap;
	NSDictionary* _borderLessIconMap;
	NSString* _model;
	NSString* _majorVersion;
	NSString* _tipsContentBasePath;
	NSString* _hexRepresentationOfProuctHash;
	NSDateFormatter* _lastModifiedDateFormatter;
	NSString* _facility;

}

@property (assign,nonatomic) long long logLevel;                                       //@synthesize logLevel=_logLevel - In the implementation block
@property (nonatomic,readonly) NSURL * currentTipsFeedURL; 
@property (nonatomic,readonly) NSString * noticeLabel;                                 //@synthesize noticeLabel=_noticeLabel - In the implementation block
@property (nonatomic,readonly) NSString * currentLocaleCountryCode; 
@property (nonatomic,retain) NSDictionary * appIdentifierMap;                          //@synthesize appIdentifierMap=_appIdentifierMap - In the implementation block
@property (nonatomic,retain) NSDictionary * borderLessIconMap;                         //@synthesize borderLessIconMap=_borderLessIconMap - In the implementation block
@property (nonatomic,retain) NSString * model;                                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * majorVersion;                                  //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSString * tipsContentBasePath;                           //@synthesize tipsContentBasePath=_tipsContentBasePath - In the implementation block
@property (nonatomic,retain) NSString * hexRepresentationOfProuctHash;                 //@synthesize hexRepresentationOfProuctHash=_hexRepresentationOfProuctHash - In the implementation block
@property (nonatomic,retain) NSDateFormatter * lastModifiedDateFormatter;              //@synthesize lastModifiedDateFormatter=_lastModifiedDateFormatter - In the implementation block
@property (nonatomic,retain) NSString * facility;                                      //@synthesize facility=_facility - In the implementation block
+(void)targetInfoForArray:(id)arg1 targetedArray:(id*)arg2 excludeArray:(id*)arg3 ;
+(BOOL)tipIsValidWithDeviceRegion:(id)arg1 deviceHash:(id)arg2 targetedRegion:(id)arg3 excludeRegions:(id)arg4 targetedDevices:(id)arg5 excludeDevices:(id)arg6 ;
+(id)sharedInstance;
-(NSDictionary *)appIdentifierMap;
-(NSDictionary *)borderLessIconMap;
-(void)logAtLevel:(long long)arg1 message:(id)arg2 ;
-(NSString *)currentLocaleCountryCode;
-(NSString *)hexRepresentationOfProuctHash;
-(NSURL *)currentTipsFeedURL;
-(NSString *)tipsContentBasePath;
-(NSString *)noticeLabel;
-(NSDateFormatter *)lastModifiedDateFormatter;
-(void)setAppIdentifierMap:(NSDictionary *)arg1 ;
-(void)setBorderLessIconMap:(NSDictionary *)arg1 ;
-(void)setMajorVersion:(NSString *)arg1 ;
-(void)setTipsContentBasePath:(NSString *)arg1 ;
-(void)setHexRepresentationOfProuctHash:(NSString *)arg1 ;
-(void)setLastModifiedDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setLogLevel:(long long)arg1 ;
-(id)init;
-(NSString *)model;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(long long)logLevel;
-(NSString *)facility;
-(void)setFacility:(NSString *)arg1 ;
-(NSString *)majorVersion;
@end

