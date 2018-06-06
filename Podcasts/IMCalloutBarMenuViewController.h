/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/AEAnnotationPopoverViewController.h>
#import <Podcasts/IMMenuViewController.h>

@class NSArray, IMCalloutBar, NSString;

@interface IMCalloutBarMenuViewController : AEAnnotationPopoverViewController <IMMenuViewController> {

	NSArray* _menuItems;
	IMCalloutBar* _calloutBar;

}

@property (nonatomic,copy) NSArray * menuItems;                      //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,retain) IMCalloutBar * calloutBar;              //@synthesize calloutBar=_calloutBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCalloutBar:(IMCalloutBar *)arg1 ;
-(void)presentFromRect:(CGRect)arg1 view:(id)arg2 ;
-(id)newButton;
-(IMCalloutBar *)calloutBar;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end
