/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSArray;

@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor {

	NSArray* _suggestions;
	unsigned long long _availability;

}

@property (nonatomic,readonly) NSArray * suggestions;                        //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)availability;
-(NSArray *)suggestions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 suggestions:(id)arg2 availability:(unsigned long long)arg3 ;
@end

