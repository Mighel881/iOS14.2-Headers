/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIUserDictionaryEntry.h>

@class NSString, NSNumber;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSNumber* _timestamp;

}

@property (nonatomic,copy) NSString * phrase;                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                     //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)valueWithEntry:(id)arg1 ;
-(NSString *)shortcut;
-(void)setPhrase:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setShortcut:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phrase;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(BOOL)matchesEntry:(id)arg1 ;
-(id)shortcutForSorting;
@end

