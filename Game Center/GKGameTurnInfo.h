/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKGame, NSDate;

@interface GKGameTurnInfo : NSObject {

	GKGame* _game;
	unsigned long long _numberOfActiveMatches;
	unsigned long long _numberOfLocalPlayerTurns;
	NSDate* _lastTurnDate;

}

@property (nonatomic,retain) GKGame * game;                                            //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfActiveMatches;                 //@synthesize numberOfActiveMatches=_numberOfActiveMatches - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLocalPlayerTurns;              //@synthesize numberOfLocalPlayerTurns=_numberOfLocalPlayerTurns - In the implementation block
@property (nonatomic,retain) NSDate * lastTurnDate;                                    //@synthesize lastTurnDate=_lastTurnDate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(NSDate *)lastTurnDate;
-(void)setLastTurnDate:(NSDate *)arg1 ;
-(void)setNumberOfActiveMatches:(unsigned long long)arg1 ;
-(void)setNumberOfLocalPlayerTurns:(unsigned long long)arg1 ;
-(unsigned long long)numberOfActiveMatches;
-(unsigned long long)numberOfLocalPlayerTurns;
@end

