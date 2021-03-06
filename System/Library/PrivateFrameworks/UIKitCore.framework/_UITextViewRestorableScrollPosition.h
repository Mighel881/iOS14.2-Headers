/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {

	NSRange _range;
	double _offsetInLine;

}
+(id)restorableScrollPositionForTextView:(id)arg1 ;
+(id)restorableScrollPositionWithDictionary:(id)arg1 ;
+(id)restorableScrollPositionWithRange:(NSRange)arg1 ;
+(id)restorableScrollPositionForStateRestoration:(id)arg1 ;
-(NSRange)range;
-(id)initWithTextViewForStateRestoration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)dictionaryRepresentation;
-(id)initWithTextView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)offsetWithinLine;
@end

