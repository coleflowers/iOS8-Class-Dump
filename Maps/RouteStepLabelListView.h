/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/LabelListView.h>

@interface RouteStepLabelListView : LabelListView {

	BOOL _tableMode;

}

@property (assign,nonatomic) BOOL tableMode;              //@synthesize tableMode=_tableMode - In the implementation block
+(id)stringsForRoute:(id)arg1 step:(id)arg2 tableMode:(BOOL)arg3 ;
+(id)fontsForStrings:(id)arg1 route:(id)arg2 step:(id)arg3 tableMode:(BOOL)arg4 ;
+(id)voiceOverStringsForRoute:(id)arg1 step:(id)arg2 tableMode:(BOOL)arg3 ;
+(id)stringsForRoute:(id)arg1 step:(id)arg2 tableMode:(BOOL)arg3 isPrinting:(BOOL)arg4 ;
+(double)heightForWidth:(double)arg1 route:(id)arg2 step:(id)arg3 ;
-(void)setTableMode:(BOOL)arg1 ;
-(id)initWithRoute:(id)arg1 step:(id)arg2 tableMode:(BOOL)arg3 ;
-(void)setRoute:(id)arg1 step:(id)arg2 tableMode:(BOOL)arg3 ;
-(BOOL)tableMode;
@end
