/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITextField.h>

@class _UILegibilityView, _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField {

	BOOL _showingEditUI;
	_UILegibilityView* _legibilityView;
	BOOL _allowsEditing;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) BOOL allowsEditing;                                      //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
+(void)warmupIfNecessary;
+(id)_editBackgroundImage;
+(id)_clearButtonImage;
-(void)_updateLegibility;
-(id)_clearButtonImage;
-(double)_legibilityStrength;
-(CGRect)_textRectForBounds:(CGRect)arg1 ;
-(void)setShowsEditUI:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(id)_backgroundImage;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(double)fontSize;
-(void)_updateLegibilityView;
@end

