/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NotesDisplayController;

@interface NotesActivityViewController : UIActivityViewController {

	NotesDisplayController* _displayController;

}

@property (nonatomic,retain) NotesDisplayController * displayController;              //@synthesize displayController=_displayController - In the implementation block
-(void)setDisplayController:(NotesDisplayController *)arg1 ;
-(NotesDisplayController *)displayController;
-(BOOL)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
@end

