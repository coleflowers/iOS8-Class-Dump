/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSDownload, NSString;

@interface MTSSDownload : NSObject {

	int _downloadPhase;
	long long _bytesTotal;
	long long _bytesDownloaded;
	double _estimatedSecondsRemaining;
	SSDownload* _download;
	NSString* _podcastUuid;
	NSString* _episodeUuid;
	double _queuedDate;

}

@property (nonatomic,retain) SSDownload * download;                           //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) NSString * podcastUuid;                          //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (nonatomic,retain) NSString * episodeUuid;                          //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (assign,nonatomic) double queuedDate;                               //@synthesize queuedDate=_queuedDate - In the implementation block
@property (nonatomic,readonly) long long bytesTotal;                          //@synthesize bytesTotal=_bytesTotal - In the implementation block
@property (nonatomic,readonly) long long bytesDownloaded;                     //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (nonatomic,readonly) long long downloadBytes; 
@property (nonatomic,readonly) int downloadPhase;                             //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (nonatomic,readonly) double downloadProgress; 
@property (nonatomic,readonly) double downloadRemainingTime; 
@property (nonatomic,readonly) double estimatedSecondsRemaining;              //@synthesize estimatedSecondsRemaining=_estimatedSecondsRemaining - In the implementation block
+(id)numberFormatter;
-(NSString *)episodeUuid;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(NSString *)podcastUuid;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(double)downloadRemainingTime;
-(long long)downloadBytes;
-(id)downloadDescription;
-(void)setDownload:(SSDownload *)arg1 ;
-(void)updateWithDownload:(id)arg1 ;
-(id)initWithDownload:(id)arg1 podcastUuid:(id)arg2 episodeUuid:(id)arg3 ;
-(double)queuedDate;
-(void)setQueuedDate:(double)arg1 ;
-(void)_setBytesTotal:(long long)arg1 ;
-(void)_setDownloadPhase:(id)arg1 ;
-(void)_setBytesDownloaded:(long long)arg1 ;
-(void)_setEstimatedTimeRemaining:(double)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(SSDownload *)download;
-(int)downloadPhase;
-(id)description;
-(void)cancelDownload;
-(double)downloadProgress;
-(double)estimatedSecondsRemaining;
@end
