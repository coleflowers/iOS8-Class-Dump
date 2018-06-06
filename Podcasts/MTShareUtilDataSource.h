/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MTShareUtilDataSource : NSObject {

	long long _currentShareMode;
	long long _supportedShareModes;
	NSMutableDictionary* _shareData;

}

@property (assign,nonatomic) long long currentShareMode;                   //@synthesize currentShareMode=_currentShareMode - In the implementation block
@property (assign,nonatomic) long long supportedShareModes;                //@synthesize supportedShareModes=_supportedShareModes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareData;              //@synthesize shareData=_shareData - In the implementation block
-(id)twitterShareMessage;
-(id)facebookShareMessage;
-(id)shareMessage;
-(id)shareURL;
-(void)setValue:(id)arg1 forKey:(id)arg2 shareModes:(long long)arg3 ;
-(long long)currentShareMode;
-(id)valueForKey:(id)arg1 shareMode:(long long)arg2 ;
-(NSMutableDictionary *)shareData;
-(id)initWithPodcast:(id)arg1 ;
-(id)initWithPodcastDetails:(id)arg1 ;
-(id)shareImage;
-(void)setCurrentShareMode:(long long)arg1 ;
-(long long)supportedShareModes;
-(void)setSupportedShareModes:(long long)arg1 ;
-(void)setShareData:(NSMutableDictionary *)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
-(id)emailSubject;
@end
