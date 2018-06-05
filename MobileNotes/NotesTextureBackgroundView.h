/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@class NotesTextureView, NSLayoutConstraint;

@interface NotesTextureBackgroundView : UIView {

	NotesTextureView* _textureView;
	BOOL _scrollsTexture;
	NSLayoutConstraint* _textureYConstraint;
	NSLayoutConstraint* _textureHeightConstraint;

}

@property (assign) BOOL scrollsTexture;                                                 //@synthesize scrollsTexture=_scrollsTexture - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textureYConstraint;                   //@synthesize textureYConstraint=_textureYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textureHeightConstraint;              //@synthesize textureHeightConstraint=_textureHeightConstraint - In the implementation block
+(id)textureImage;
-(id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3 ;
-(void)setTextureYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextureHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textureYConstraint;
-(NSLayoutConstraint *)textureHeightConstraint;
-(BOOL)scrollsTexture;
-(double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2 ;
-(void)setScrollsTexture:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

