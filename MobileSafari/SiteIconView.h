/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:07 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIImageView, WebBookmark;

@interface SiteIconView : UIImageView {

	UIImageView* _glyphView;
	WebBookmark* _bookmark;

}

@property (nonatomic,retain) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
-(void)setBookmark:(id)arg1 icon:(id)arg2 ;
-(void)_updateBookmarkDataWithIcon:(id)arg1 ;
-(void)_clearGlyph;
-(void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)updateBookmarkData;
-(void)layoutSubviews;
-(id)_tintedFolderImage;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
@end
