/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMMediaItem.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSArray, NSURL, UIImage, NSObject, AVPlayerItem, AVURLAsset, NSString;

@interface MTPlayerItem : NSObject <IMMediaItem> {

	struct {
		unsigned chaptersLoaded : 1;
		unsigned videoChecked : 1;
	}  _playerItemFlags;
	BOOL _isVideo;
	double _duration;
	double _bookmarkTime;
	NSArray* _chapters;
	NSURL* _url;
	UIImage* _artwork;
	NSObject*<OS_dispatch_queue> _chapterLoadingQueue;
	AVPlayerItem* _item;
	NSDictionary* _userInfo;
	AVURLAsset* _asset;
	double _currentTime;
	/*^block*/id _bookmarkTimeBlock;

}

@property (nonatomic,retain) AVPlayerItem * item;                       //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id bookmarkTimeBlock;                        //@synthesize bookmarkTimeBlock=_bookmarkTimeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double currentTime;                        //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) NSArray * chapters;                      //@synthesize chapters=_chapters - In the implementation block
@property (nonatomic,readonly) NSArray * timeChapters; 
@property (nonatomic,readonly) NSArray * metadataChapters; 
-(id)episode;
-(id)podcastUuid;
-(void)loadChapters;
-(NSArray *)timeChapters;
-(NSArray *)metadataChapters;
-(id)initWithUrl:(id)arg1 ;
-(id)titleChapters;
-(id)urlChapters;
-(id)artworkChapters;
-(id)bookmarkTimeBlock;
-(void)setBookmarkTimeBlock:(id)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
-(double)bookmarkTime;
-(id)artwork;
-(id)podcastTitle;
-(double)availableDuration;
-(id)nowPlayingInfo;
-(void)setArtwork:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)duration;
-(id)url;
-(void)setDuration:(double)arg1 ;
-(id)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(AVPlayerItem *)item;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(AVURLAsset *)asset;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(BOOL)isVideo;
-(void)setBookmarkTime:(double)arg1 ;
-(NSArray *)chapters;
-(id)feedURL;
-(id)podcast;
-(id)author;
-(id)assetURL;
-(double)currentTime;
@end

