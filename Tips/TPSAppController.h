/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:30:51 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSXPCConnection, NSMutableDictionary;

@interface TPSAppController : NSObject {

	unsigned long long _supportedInterfaceOrientations;
	BOOL _phoneUI;
	BOOL _useStackUI;
	BOOL _zoomMode;
	BOOL _disableAutoplay;
	long long _deviceSize;
	long long _deviceSpeed;
	NSURL* _baseURL;
	NSString* _screenSizeConfigName;
	NSString* _screenScaleConfigName;
	NSString* _launchedFromNotificationForTipIdentifier;
	NSXPCConnection* _xpcConnection;
	NSMutableDictionary* _tipLikedDictionary;

}

@property (getter=isPhoneUI,nonatomic,readonly) BOOL phoneUI;                                  //@synthesize phoneUI=_phoneUI - In the implementation block
@property (nonatomic,readonly) BOOL useStackUI;                                                //@synthesize useStackUI=_useStackUI - In the implementation block
@property (nonatomic,readonly) BOOL zoomMode;                                                  //@synthesize zoomMode=_zoomMode - In the implementation block
@property (nonatomic,readonly) BOOL disableAutoplay;                                           //@synthesize disableAutoplay=_disableAutoplay - In the implementation block
@property (nonatomic,readonly) long long deviceSize;                                           //@synthesize deviceSize=_deviceSize - In the implementation block
@property (nonatomic,readonly) long long deviceSpeed;                                          //@synthesize deviceSpeed=_deviceSpeed - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSString * appName; 
@property (nonatomic,retain) NSString * screenSizeConfigName;                                  //@synthesize screenSizeConfigName=_screenSizeConfigName - In the implementation block
@property (nonatomic,retain) NSString * screenScaleConfigName;                                 //@synthesize screenScaleConfigName=_screenScaleConfigName - In the implementation block
@property (nonatomic,retain) NSString * launchedFromNotificationForTipIdentifier;              //@synthesize launchedFromNotificationForTipIdentifier=_launchedFromNotificationForTipIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tipLikedDictionary;                         //@synthesize tipLikedDictionary=_tipLikedDictionary - In the implementation block
+(void)incrementNetworkActivityIndicatorVisible;
+(void)decrementNetworkActivityIndicatorVisible;
+(id)sharedInstance;
-(long long)deviceSpeed;
-(BOOL)useStackUI;
-(void)updateTip:(id)arg1 withLike:(BOOL)arg2 ;
-(BOOL)likeStateForTip:(id)arg1 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 tip:(id)arg2 ;
-(NSString *)launchedFromNotificationForTipIdentifier;
-(void)updateFeedLastModifiedDate:(id)arg1 lastTipId:(id)arg2 allTipIDs:(id)arg3 ;
-(long long)deviceSize;
-(void)setLaunchedFromNotificationForTipIdentifier:(NSString *)arg1 ;
-(BOOL)isPhoneUI;
-(NSString *)screenSizeConfigName;
-(NSString *)screenScaleConfigName;
-(BOOL)zoomMode;
-(void)analyticsSetValue:(long long)arg1 forKey:(id)arg2 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 tip:(id)arg2 additionalParameter:(id)arg3 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 ;
-(id)analyticsNormalizedKeyForKey:(id)arg1 ;
-(NSMutableDictionary *)tipLikedDictionary;
-(void)analyticsSetValue:(long long)arg1 forKey:(id)arg2 tip:(id)arg3 ;
-(id)activityViewControllerForTip:(id)arg1 ;
-(BOOL)disableAutoplay;
-(void)setScreenSizeConfigName:(NSString *)arg1 ;
-(void)setScreenScaleConfigName:(NSString *)arg1 ;
-(void)setTipLikedDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)appName;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(NSURL *)baseURL;
-(void)_destroyXPCConnection;
-(id)currentXPCConnection;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

