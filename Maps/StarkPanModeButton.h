/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>

@interface StarkPanModeButton : UIButton {

	BOOL _updatingImages;
	BOOL _active;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)_updateImages;
@end

