/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKAnnotation.h>

@class RAPMapFeaturePickerViewController, NSString;

@interface RAPMapFeaturePickerPinAnnotation : NSObject <MKAnnotation> {

	RAPMapFeaturePickerViewController* _owner;
	NSString* _title;
	NSString* _subtitle;
	SCD_Struct_RA0 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_RA0 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
-(id)initWithOwner:(id)arg1 title:(id)arg2 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(SCD_Struct_RA0)coordinate;
-(void)setCoordinate:(SCD_Struct_RA0)arg1 ;
@end
