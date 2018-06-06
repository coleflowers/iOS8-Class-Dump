/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface VideosExtrasPlaybackContext : MPPlaybackContext {

	NSMutableArray* _bookmarkTimes;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _assetTypes;
	BOOL _isBackgroundContext;
	int _playbackMode;
	NSArray* _assets;

}

@property (nonatomic,readonly) NSArray * assets;                      //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundContext;              //@synthesize isBackgroundContext=_isBackgroundContext - In the implementation block
@property (nonatomic,readonly) int playbackMode;                      //@synthesize playbackMode=_playbackMode - In the implementation block
+(Class)queueFeederClass;
-(id)initWithMediaElements:(id)arg1 isBackgroundContent:(BOOL)arg2 ;
-(void)loadExtrasBookmarksWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isBackgroundContext;
-(unsigned long long)itemTypeForAssetAtIndex:(unsigned long long)arg1 ;
-(double)startTimeForAssetAtIndex:(unsigned long long)arg1 ;
-(int)playbackMode;
-(id)description;
-(NSArray *)assets;
@end

