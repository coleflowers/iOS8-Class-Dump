/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:23:39 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicAVPlayer, RadioStation, MPAVItem, RadioTrack;

@interface MARadioRemoteControlContext : NSObject {

	MusicAVPlayer* _player;
	RadioStation* _radioStation;
	long long _trackID;
	MPAVItem* _currentlyPlayingItem;
	RadioTrack* _currentlyPlayingTrack;

}

@property (nonatomic,readonly) MusicAVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) RadioStation * radioStation;                     //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,readonly) long long trackID;                               //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;                 //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
@property (nonatomic,readonly) RadioTrack * currentlyPlayingTrack;              //@synthesize currentlyPlayingTrack=_currentlyPlayingTrack - In the implementation block
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
-(RadioTrack *)currentlyPlayingTrack;
-(RadioStation *)radioStation;
-(long long)trackID;
-(MusicAVPlayer *)player;
@end

