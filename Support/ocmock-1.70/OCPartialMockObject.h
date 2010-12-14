//---------------------------------------------------------------------------------------
//  $Id: OCPartialMockObject.h 68 2010-08-20 13:20:52Z erik $
//  Copyright (c) 2009 by Mulle Kybernetik. See License file for details.
//---------------------------------------------------------------------------------------

#import "OCClassMockObject.h"

@interface OCPartialMockObject : OCClassMockObject 
{
	NSObject	*realObject;
}

- (id)initWithObject:(NSObject *)anObject;

- (NSObject *)realObject;

- (void)setupSubclassForObject:(id)anObject;
- (void)setupForwarderForSelector:(SEL)selector;

@end


extern NSString *OCMRealMethodAliasPrefix;