/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@interface MapsBottomBarButton : UIButton {

	BOOL _shouldInvertSelectionColor;
	BOOL shouldInvertSelectionColor;

}

@property (assign) BOOL shouldInvertSelectionColor; 
-(void)setShouldInvertSelectionColor:(BOOL)arg1 ;
-(void)updateSelectedTintColor;
-(BOOL)shouldInvertSelectionColor;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(double)_selectedIndicatorAlpha;
@end

