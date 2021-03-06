/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class GKGame, UIImage, NSString;

@interface GKBuyGameActivity : UIActivity {

	GKGame* _game;
	UIImage* _icon;
	NSString* _context;

}

@property (nonatomic,retain) GKGame * game;                   //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImage * icon;                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * context;              //@synthesize context=_context - In the implementation block
+(id)buyGameActivityWithContext:(id)arg1 ;
-(id)styleIconForActivityImage:(id)arg1 ;
-(UIImage *)icon;
-(void)dealloc;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(id)_activityImage;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(BOOL)_canPerformWithSuppliedActivityItems:(id)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
@end

